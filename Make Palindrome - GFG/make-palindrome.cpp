//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
           unordered_map<string,int>mp;
            int cnt=0;
        for(auto it:arr){
            string s=it;
            reverse(s.begin(), s.end());
            if(mp.find(s) !=mp.end()){
                mp.erase(s);
            }else{
                 mp[it]=1;
            }
        }
        
       if(mp.size() == 0){
           return true;
       }
       
       if(mp.size() == 1){
           for(auto it:mp){
               string s = it.first;
               int i=0, j=s.length()-1;
               
               while(i<=j){
                   if(s[i]!=s[j]){
                       return false;
                   }
                   
                   i++; j--;
               }
               
               return true;
           }
       }
       
       return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends