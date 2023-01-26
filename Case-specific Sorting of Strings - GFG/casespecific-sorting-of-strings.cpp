//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string up="";
        string low="";
        for(int i=0;i<n;i++)
        {
            if(isupper(str[i]))
            {
                up+=str[i];
            }
            else{
                low+=str[i];
            }
        }
        sort(up.begin(),up.end());
        sort(low.begin(),low.end());
        int j=0,k=0,l=0;
        string res="";
        while(j<up.size() || k<low.size() || l<n)
        {
             if(isupper(str[l]))
            {
                res+=up[j];
                j++;
                
            }
            else{
                res+=low[k];
                k++;
            }
            l++;
        
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends