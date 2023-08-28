//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int t[1002][1002];
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int n,int wt[],int val[],int W)
    {
        if(n==0 || W==0) return 0;
        
        if(t[n][W]!= -1) return t[n][W];
        
        if(wt[n-1]<=W)
        {
            return t[n][W]= max(val[n-1]+helper(n-1,wt,val,W-wt[n-1]),helper(n-1,wt,val,W));
        }
        else{
            return t[n][W]=helper(n-1,wt,val,W);
        }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(t,-1,sizeof(t));
       return helper(n,wt,val,W);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends