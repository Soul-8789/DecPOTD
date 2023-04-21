//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
struct Trie{
        Trie *child[26] = {};
    };
    
    void push(string &s,Trie *root){
        auto it = root,it2(root);
        int n = s.size();
        for(int i= 0;i<n;i++){
            if(!it->child[s[i]-'a']) it->child[s[i]-'a'] = new Trie();
            if(!it2->child[s[n-i-1]-'a']) it2->child[s[n-i-1]-'a'] = new Trie();
            it = it->child[s[i]-'a'];
            it2 = it2->child[s[n-i-1]-'a'];
        }
    }
    
    bool prefixorSuffix(string &s,Trie *root){
        auto p1(root),p2(root);
        bool a1(true),a2(true);
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(!a1 || p1->child[s[i]-'a']==NULL) a1 = 0;
            else p1 = p1->child[s[i]-'a'];
            if(!a2 || !p2->child[s[n-i-1]-'a']) a2 = 0;
            else p2 = p2->child[s[n-i-1]-'a'];
        }
        return (a1 || a2);
    }
    
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        Trie *root = new Trie();
        for(auto &s:s1)
            push(s,root);
        int cnt(0);
        for(auto &s:s2)
            if(prefixorSuffix(s,root)) cnt++;
        return cnt;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends