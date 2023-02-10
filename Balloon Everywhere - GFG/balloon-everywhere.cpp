//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
       int c1=0,c2=0,c3=0,c4=0,c5=0;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='b') c1++;
        else if(s[i]=='a') c2++;
        else if(s[i]=='l') c3++;
          else if(s[i]=='o') c4++;
          else if(s[i]=='n') c5++;
        }
        int cnt=min(c1,min(c2,c5));

        int ans=min(cnt,min(c3/2,c4/2));
        
        return ans; 
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends