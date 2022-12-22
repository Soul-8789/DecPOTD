//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

#define ll long long
class Solution{
public:
    ll int findSubarray(vector<long long int> &arr, int n ) {
        ll sum=0, ans=0;
        unordered_map<ll, ll> mp;
        mp[0]=1;
        for(int i=0; i<n; i++) {
            sum += arr[i];
            ans += mp[sum];
            mp[sum]++;
        }
        return ans;
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
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends