#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
vector<vector<string>> Anagrams(vector<string>& string_list) {
  vector<vector<string>> ans;
  unordered_map <string, vector<string>> mp;
        
  for(auto str : string_list) {
    string word = str;
    sort(word.begin(), word.end());
    mp[word].push_back(str);
  }
        
  for(auto it : mp) {
    ans.push_back(it.second);
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
	vector<string> vec(n);
	for(int i=0; i<n; i++){
		cin>>vec[i];
	}
	solution ob;
	vector<vector<string>> ans= ob.Anagrams(vec);
	sort(ans.begin(), ans.end());
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
}

//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#