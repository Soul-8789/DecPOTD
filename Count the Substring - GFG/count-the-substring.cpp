//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


#define ll long long

class Solution {
public:
    ll countSubstring(string s) {
        ll ans = 0, sum = -1;
        map<ll, ll> help;
        vector<ll> dp(s.size(), 0);
        if(s[0] == '1') {
        	dp[0] = 1;
        	ans = sum = 1;
        }
        help[sum] = 0;
        help[0] = -1;
        for(int i=1; i<s.size(); i++) {
        	ll tmp = 0;
        	if(s[i] == '0') {
        		sum--;
        		if(help.find(sum) != help.end() and help[sum] != -1)
        			tmp += dp[help[sum]];
        	}
        	else {
        		sum++;
        		if(help.find(sum) != help.end()) {
        			if(help[sum] != -1)
        				tmp = dp[help[sum]]+i-help[sum]-1;
        			else
        				tmp = i-help[sum]-1;
        		}
        		else tmp += i+1;
        	}
        	help[sum] = i;
        	dp[i] = tmp;
        	ans += tmp;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends