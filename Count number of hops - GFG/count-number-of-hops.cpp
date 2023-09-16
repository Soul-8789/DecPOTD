//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    const int mod=1e9+7;
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
         if(n==0 ||n==1) return 1;
        if(n==2) return 2;
        long long p3=1,p2=1,p1=2;
        
        for(int i=3;i<=n;i++){
            long long curr=(p1+p2+p3)%mod;
            p3=p2;
            p2=p1;
            p1=curr;
        }
        
        return p1;
        
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends