//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		     map<char, int>seen;
            string res;
            queue<char>q;
            string ans;
            for(char ch: A) {
                seen[ch]++;
                while(!q.empty() and seen[q.front()] > 1) q.pop();
                if(seen[ch] == 1)
                    q.push(ch);
                if(q.empty()) ans.push_back('#');
                else ans.push_back(q.front());
            }          
            return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends