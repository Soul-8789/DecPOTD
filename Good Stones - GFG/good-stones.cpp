//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
     bool check(vector<int>&arr,int idx,vector<bool>&dp,vector<bool>&vis)
    {
        if(idx<0||idx>=arr.size())return true;
        if(dp[idx])return true;
        if(vis[idx])return false;
        vis[idx] = 1;
        dp[idx] = check(arr,idx+arr[idx],dp,vis);
        return dp[idx];
    }
    int goodStones(int n,vector<int> &arr){
        vector<bool>dp(n,0);
        vector<bool>vis(n,0);
        for(int i=0;i<n;i++)
        {
            check(arr,i,dp,vis);    
        }
        
        int count = 0;
        for(auto x:dp)
        {
            if(x)count++;
        }
        return count;
    }  
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends