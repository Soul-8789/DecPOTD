//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        int f=1;
        for(int i=0; i<n; i++)
            if(str[i]=='0') {
                f=0;
                break;
            }

        int mxsum=0, cursum=0;
        int l=0, r=0, tmp=0;
        for(int i=0; i<n; i++) {
            if(str[i] == '0') cursum++;
            else cursum--;
            if(mxsum < cursum) {
                mxsum = cursum;
                l = tmp;
                r = i;
            }
            if(cursum < 0) {
                cursum = 0;
                tmp = i+1;
            }
        }
        if(f) return {-1};
        return {l+1, r+1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends