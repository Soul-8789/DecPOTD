//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int fib(int i)
	{
	   if(i<=1) return i;
	   int res1=fib(i-1);
	   int res2=fib(i-2);
	   
	   return res1+res2;
	}
		int nthStair(int n){
		    //  Code here
		  //  vector<int> dp(n+1,0);
		  //  if(n==0 || n==1) return n;
		  //  dp[0]=1;
		  //  dp[1]=1;
		  //  for(int i=2;i<=n;i++)
		  //  {
		  //      dp[i]=dp[i-1]+dp[i-2];
		  //  }
		  //  return dp[n];
		  //vector<int>dp(n+1,-1);
		  //return dp[n];
		  //vector<int> dp(n+1,-1);
		  //return fib(n);
		  return n/2 +1;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends