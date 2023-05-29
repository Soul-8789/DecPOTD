//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        int count=0;
        string check;
         vector<string> ans;
        for(string i : Dictionary)
        {
             check="";
            for(char ch : i)
            {
                
                if (ch >='A' && ch <= 'Z')
                {
                    check.push_back(ch);
                    if(check==Pattern)
                    {
                       
                        ans.push_back(i);
                        
                    }
                }
                
                
            }
            
           
        }
        if(ans.size()==0)
        {
            
            ans.push_back("-1");
            return ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends