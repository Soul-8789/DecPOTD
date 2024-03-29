//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &arr, int n) {
        // Write your code here.
         vector<int>pre(4,0);

        for(int i=1;i<=n;i++){

            vector<int>curr(4,0);

            for(int prev=0;prev<=3;prev++){

                int one=1e9,two=1e9,three=1e9;

                if(prev!=0)one=arr[i-1][0]+pre[0];

                if(prev!=1)two=arr[i-1][1]+pre[1];

                if(prev!=2)three=arr[i-1][2]+pre[2];

                

                curr[prev]=min(one,min(two,three));

            }

            pre=curr;

        }

        return pre[3];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends