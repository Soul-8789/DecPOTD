//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy11 (string S)
	{
	    // Your Code Here
	    int res1=0,res2=0,changel=1;
	    for(int i=0;i<S.length();i++)
	    {
	       if(i%2==0)
	       res1+=(S[i]-'0');
	       else 
	        res2+=(S[i]-'0');
	    }
	    return ((res1-res2)%11==0);
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends