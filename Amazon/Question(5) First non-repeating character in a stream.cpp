
#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		string FirstNonRepeating(string A){
		    int n=A.size();
		    vector<int> f(26,0);
		    vector<int> vis(26,-1);
		    for(int i=0; i<A.size(); i++){
		        if(vis[A[i]-'a']==-1)
		        vis[A[i]-'a']=i;
		}
		string ans="";
		for(int i=0; i<A.size(); i++){
		    f[A[i]-'a']++;
		    char ch='#';
		    int x=A.size()+1;
		    for(int j=0; j<26; j++){
		        if(f[j]==1 && x>vis[j]){
		            ch=char(j+'a');
		            x=vis[j];
		        }
		    }
		    ans +=ch;
		}
		return ans;
		}

};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}

//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#