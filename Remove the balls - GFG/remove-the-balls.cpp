//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        vector<pair<int,int> > res;
        for(int i=0;i<n;i++)
        {
           res.push_back({color[i],radius[i]}); 
        }
        stack<pair<int,int> >temp;
        
    for (int i = 0; i < n; i++) {
        if (temp.empty()) {
            temp.push({res[i].first,res[i].second});
        }
        else if ((temp.top().first == res[i].first)&&
                 (temp.top().second ==  res[i].second)) {
             
            
            temp.pop();
        }
        else {
            temp.push({res[i].first,res[i].second});
        }
    }
    return temp.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends