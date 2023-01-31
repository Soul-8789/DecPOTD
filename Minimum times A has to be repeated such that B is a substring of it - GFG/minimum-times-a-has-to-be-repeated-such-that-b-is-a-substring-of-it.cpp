//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string a, string b) {
        // code here
        int result=1;
        string res=a;
        while(res.length() <b.length())
        {
            res+=a;
            result++;
        }
        if(res.find(b)!=string::npos)
        return result;
        res+=a;
        if(res.find(b)!=string::npos)
        {
            return result+1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends