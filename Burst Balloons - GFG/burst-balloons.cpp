//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
int travel(int i, int j, vector<int> &arr, vector<vector<int>> &dp){
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        dp[i][j] = INT_MIN;
        for(int k = i; k <= j; k++)
            dp[i][j] = max(dp[i][j], arr[i - 1]*arr[k]*arr[j + 1] + travel(i, k - 1, arr, dp) + travel(k + 1, j, arr, dp));
        return dp[i][j];
    }
    
public:
    int maxCoins(int N, vector<int> &arr) {
        arr.push_back(1);
        arr.insert(arr.begin(), 1);
        vector<vector<int>> dp (N + 1, vector<int> (N + 1, -1));
        return travel(1, N, arr, dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends