//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
          long long dp[1001][1001];
      for(int i=0;i<N+1;i++){
            dp[i][0] = 1 ; 
        }for(int j=1;j<sum+1;j++){
            dp[0][j] = 0 ; 
        }
          for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                long long not_taken=dp[i-1][j];
                long long taken=0;
                if(coins[i-1]<=j)
                {
                    taken=dp[i][j-coins[i-1]];
                }
                dp[i][j]=taken+not_taken;
              
            }
        }
        return dp[N][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends