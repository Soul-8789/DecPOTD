//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            stack<int> s;
            int neg =0;
            for(int i=n-1 ;i>=0;i--){
                if( arr[i] <0)neg++;
                s.push(arr[i]);
            }
            int m=0;
            while(!s.empty()){
                if( s.top()<0){
                    arr[m]=s.top();
                    m++;
                }
                else{
                    arr[neg]=s.top();
                    neg++;
                }
                s.pop();
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends