//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string temp;
           int i=s.size()-1;
           while(i>=0){
               if(isdigit(s[i]) && isdigit(s[i-1])){
                   temp+=s[i-1];
                   temp+=s[i];
                   i-=2;
               }
               else{
                   temp+=s[i];
                   i--;
               }
           }
           return temp;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends