#include<bits/stdc++.h>
using namespace std;
class solution{

private:
    string decode(string &s, int &idx) {
        int times = 0;
        string word = "";
        
        while(idx < s.length()) {
            if(s[idx] >= '0' && s[idx] <= '9')
                times = times * 10 + (s[idx] - '0');
            else if(s[idx] == '[') {
                idx++;
                string temp = decode(s, idx);
                while(times--) word += temp;
                times = 0;
            }
            else if(s[idx] == ']')
                return word;
            else
                word += s[idx];
            idx++;
        }
        return word;
    }
public:
    string decodedString(string s){
        // code here
        int idx = 0;
        return decode(s, idx);
    }
	};
	int main(){
		int t;
		cin>>t;
		while(t--){
			string s;
			cin>>s;
			solution ob;
			cout<<ob.decodedString(s)<<endl;
		}
	}
	//https://practice.geeksforgeeks.org/problems/decode-the-string2444/1