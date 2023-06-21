//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   long long mod=1e9+7;
    int sumOfNaturals(int n) {
        // code here
        int res=0;
         res=((n%mod)*((n%mod)+1)/2)%mod;
         return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends