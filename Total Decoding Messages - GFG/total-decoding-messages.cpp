//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	 #define ll long long
		int CountWays(string str){
		    // Code here
		    ll n = str.size(),mod = 1e9+7LL;
		    if(str[0] == '0'){
		        return 0;
		    }
		    vector<ll>dp(n,0);
		    for(ll i = 0; i < n; i++){
		        if(i + 1 < n && str[i] == '0' && str[i+1] == '0'){
		            return 0;
		        }
		        if(i == 0){
		            dp[i] = 1LL;
		        }
		        else{
		            if(str[i] == '0'){
		                if(str[i-1] > '2'){
		                    return 0;
		                }
		                else{
		                    if(i-2 >= 0){
		                        dp[i] = dp[i-2];
		                    }
		                    else{
		                        dp[i] = 1LL;
		                    }
		                }
		            }
		            else{
		                if(str[i-1] > '2'){
		                    dp[i] = dp[i-1];
		                }
		                else{
		                    if(str[i-1] == '0'){
		                        if(i-3 >= 0){
		                            dp[i] = dp[i-3];
		                        }
		                        else{
		                            dp[i] = 1LL;
		                        }
		                    }
		                    else if(str[i-1] == '1'){
		                        if(i-2 >= 0){
		                            dp[i] = (dp[i-1] + dp[i-2]) % mod;
		                        }
		                        else{
		                            dp[i] = 2LL;
		                        }
		                    }
		                    else{
		                        if(str[i] > '6'){
		                            dp[i] = dp[i-1];
		                        }
		                        else{
		                            if(i-2 >= 0){
		                                dp[i] = (dp[i-1] + dp[i-2]) % mod;
		                            }
		                            else{
		                                dp[i] = 2LL;
		                            }
		                        }
		                    }
		                }
		            }
		        }
		    }
		    return dp[n-1];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends