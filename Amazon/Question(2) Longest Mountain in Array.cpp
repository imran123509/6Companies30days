
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n=arr.size();
        int dp[n+1], dp1[n+1];
        dp[0]=0;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                dp[i]=dp[i-1]+1;
            }
            else{
                dp[i]=0;
            }
        }
        dp1[n-1]=0;
        for(int i=n-1; i>0; i--){
            if(arr[i-1]>arr[i]){
                dp1[i-1]=dp1[i]+1;
            }
            else{
                dp1[i-1]=0;
            }
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(dp[i]>0 && dp1[i]>0){
                ans=max(ans, dp[i]+dp1[i]+1);
            }
        }
        return ans;
        
    }
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];
		Solution ob;
		cout<<ob.longestMountain(v)<<endl;
	}
}
//https://leetcode.com/problems/longest-mountain-in-array/description/