
#include<bits/stdc++.h> 
using namespace std;
class Solution{   
public:
    string printMinNumberForPattern(string S){
        string ans;
        stack<int> st;
        int count=1;
        for(auto &it : S){
            if(it=='D'){
                st.push(count);
                count++;
            }
            else{
                st.push(count);
                count++;
                while(!st.empty()){
                    ans +=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(count);
        while(!st.empty()){
            ans +=to_string(st.top());
            st.pop();
        }
        return ans;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
}

//https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#