//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool isSubsetSum(int wt[], int W,int n){
        // code here
        
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
     for(int i=0;i<n+1;i++)
     {
         for(int j=0;j<W+1;j++)
         {
             if(i==0 ) 
             dp[i][0]=1;
         }
     }
      for(int i=1;i<n+1;i++)
     {
         for(int j=1;j<W+1;j++)
         {
             if(wt[i-1]<=j) 
             dp[i][j]=dp[i-1][j-wt[i-1]]||dp[i-1][j];
             else
             dp[i][j]=dp[i-1][j];
         }
     }
       
    return dp[n][W];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum&1) return 0;
        
        else{
            return isSubsetSum(arr,sum/2,N);
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends