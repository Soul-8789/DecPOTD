//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
          priority_queue<int> a ;
        for(auto el:arr){
            a.push(-el);
        }
        if(N==1) return 0;
            
        int sum = 0;
        while(N>1){
            int b = -a.top();
            a.pop();
            N--;
            int c = -a.top();
            a.pop();
            sum += b+c;
            a.push(-b-c);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends