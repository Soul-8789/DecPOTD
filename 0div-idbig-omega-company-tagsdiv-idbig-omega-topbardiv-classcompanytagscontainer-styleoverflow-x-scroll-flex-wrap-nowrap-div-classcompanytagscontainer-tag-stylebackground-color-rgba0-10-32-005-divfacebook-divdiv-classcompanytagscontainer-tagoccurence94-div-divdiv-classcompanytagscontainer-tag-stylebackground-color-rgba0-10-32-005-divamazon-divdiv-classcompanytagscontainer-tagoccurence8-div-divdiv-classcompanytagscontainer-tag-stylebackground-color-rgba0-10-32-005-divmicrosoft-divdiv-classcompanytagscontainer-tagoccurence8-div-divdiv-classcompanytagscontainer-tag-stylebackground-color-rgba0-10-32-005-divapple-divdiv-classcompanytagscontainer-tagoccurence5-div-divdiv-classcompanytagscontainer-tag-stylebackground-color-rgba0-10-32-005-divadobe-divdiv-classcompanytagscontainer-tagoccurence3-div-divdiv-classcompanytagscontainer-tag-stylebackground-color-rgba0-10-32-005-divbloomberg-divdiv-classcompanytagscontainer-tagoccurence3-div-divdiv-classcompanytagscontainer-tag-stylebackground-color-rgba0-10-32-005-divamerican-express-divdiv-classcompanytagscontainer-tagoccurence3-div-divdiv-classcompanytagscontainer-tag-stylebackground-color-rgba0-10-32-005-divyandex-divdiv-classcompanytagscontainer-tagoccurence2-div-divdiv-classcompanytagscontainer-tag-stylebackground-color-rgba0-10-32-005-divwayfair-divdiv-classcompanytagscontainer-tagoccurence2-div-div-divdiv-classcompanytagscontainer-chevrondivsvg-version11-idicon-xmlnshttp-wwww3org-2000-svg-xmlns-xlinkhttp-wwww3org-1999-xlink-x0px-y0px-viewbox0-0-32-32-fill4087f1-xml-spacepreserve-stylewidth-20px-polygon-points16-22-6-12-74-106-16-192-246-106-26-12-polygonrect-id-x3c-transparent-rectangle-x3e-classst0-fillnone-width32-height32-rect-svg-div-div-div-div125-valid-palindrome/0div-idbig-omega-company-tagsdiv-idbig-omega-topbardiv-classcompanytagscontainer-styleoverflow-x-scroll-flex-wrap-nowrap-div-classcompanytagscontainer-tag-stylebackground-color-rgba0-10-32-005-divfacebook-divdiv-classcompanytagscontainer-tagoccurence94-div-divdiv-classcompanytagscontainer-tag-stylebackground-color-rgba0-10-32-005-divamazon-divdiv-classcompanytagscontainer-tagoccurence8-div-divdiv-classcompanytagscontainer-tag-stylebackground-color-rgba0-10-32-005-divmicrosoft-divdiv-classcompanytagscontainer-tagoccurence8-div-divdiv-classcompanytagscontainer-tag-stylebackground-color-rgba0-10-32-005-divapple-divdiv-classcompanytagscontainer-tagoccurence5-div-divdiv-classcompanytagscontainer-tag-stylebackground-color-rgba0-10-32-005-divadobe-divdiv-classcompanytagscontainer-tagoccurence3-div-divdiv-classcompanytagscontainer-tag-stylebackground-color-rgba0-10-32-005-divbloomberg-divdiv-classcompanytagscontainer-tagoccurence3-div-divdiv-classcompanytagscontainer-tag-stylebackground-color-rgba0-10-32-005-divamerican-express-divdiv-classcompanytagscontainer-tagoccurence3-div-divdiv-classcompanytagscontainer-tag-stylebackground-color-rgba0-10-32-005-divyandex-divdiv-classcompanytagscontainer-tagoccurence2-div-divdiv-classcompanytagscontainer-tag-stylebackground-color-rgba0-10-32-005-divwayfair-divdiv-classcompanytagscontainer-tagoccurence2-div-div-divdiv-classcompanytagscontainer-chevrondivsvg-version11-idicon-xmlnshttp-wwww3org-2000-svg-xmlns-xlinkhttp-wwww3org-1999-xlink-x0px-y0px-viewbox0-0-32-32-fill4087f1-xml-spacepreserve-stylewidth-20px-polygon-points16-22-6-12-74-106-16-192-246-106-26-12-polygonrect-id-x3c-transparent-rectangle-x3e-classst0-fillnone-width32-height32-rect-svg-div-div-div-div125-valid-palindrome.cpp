class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                res+=tolower(s[i]);
            }
            else if(s[i]>='a'&&s[i]<='z' ){
                res+=s[i];
            }
            else if(s[i]>='0'&& s[i]<='9'){
                res+=s[i];
            }
        }
        string rev=res;
        reverse(res.begin(),res.end());
        return res==rev;
    }
};