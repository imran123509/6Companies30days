
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
string encode(string src)
{     
  string count="";
  int n=src.size(), count1=1;
  count +=src[0];
  for(int i=1; i<n; i++){
      if(src[i]==src[i-1]){
          count1++;
      }
      else{
          count +=count1+'0';
          count +=src[i];
          count1=1;
      }
  }
  count +=to_string(count1);
  return count;
}     
 //https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#

