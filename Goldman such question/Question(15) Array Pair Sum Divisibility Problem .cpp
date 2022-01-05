
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        if(n%2 !=0) return false;
        for(int i=0; i<n; i++){
            mp[nums[i]%k]++;
        }
        for(int i=0; i<n; i++){
            int rem1=nums[i]%k;
            if(rem1==0){
                if(mp[rem1]%2 !=0) return false;
            }
                else{
                    int rem2=k-rem1;
                    if(rem1==rem2 && mp[rem1]%2 !=0) return false;
                    if(mp.find(rem2)==mp.end()) return false;
                    if(mp[rem1] !=mp[rem2]) return false;
                }
            }
        return true;
    }
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}

//https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#