//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod=1e9+7;
    int nthFibonacci(int n){
        if(n==0 ||n==1) return n;
        // code here
        int prev1=0,prev=1;
        for(int i=2;i<=n;i++)
        {
            int curr=(prev1+prev)%mod;
            prev1=prev;
            prev=curr;
        }
        return prev;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends