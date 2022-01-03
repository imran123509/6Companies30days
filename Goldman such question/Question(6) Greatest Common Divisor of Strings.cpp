class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.length(), m=str2.length();
        if(n>m){
            string ans=str1;
            str1=str2;
            str2=ans;
        }
        if(str1.length()==str2.length()) return (str1==str2? str1 :"");
        for(int i=str1.length()-1; i>=0; i--){
            string pre=str1.substr(0,i+1);
            string str3;
            bool flag=0;
            while(str3.length()<=str2.length()){
                str3 +=pre;
                if(str3.length()==str2.length() && str3==str2){
flag=1;
                    break;
}
                
            }
            if(flag==0) continue;
            str3.clear();
            while(str3.length()<=str1.length()){
                 str3 +=pre;
                if(str3.length()==str1.length() && str3==str1){
                    return pre;
                }
}
            
            
            
            
        }
        return "";
    }
};

//https://leetcode.com/problems/greatest-common-divisor-of-strings/description/