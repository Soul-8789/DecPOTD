//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long evaluate(char ch1,char ch2,string &s,int X,int Y){
        stack<char>st;
        long long ans = 0;
        //First we use stack to eliminate all the occurrence of ch1 ch2
        for(int i = 0;i<s.size();i++){
            if(st.size() && st.top()==ch1 && s[i]==ch2){
                st.pop();
                ans += X;
            }
            else
            st.push(s[i]);
        }
        //Than for the remaining characters, we need to check for the occurrence of ch2 ch1
        if(st.size()<2) return ans;
        s = "";
        while(st.size()){
            s.push_back(st.top());
            st.pop();
        }
        // cout<<s<<" "<<ans<<endl;
        for(auto it = s.rbegin();it!=s.rend();it++){
            if(st.size() && st.top()==ch2 && *it==ch1){
                ans += Y;
                st.pop();
            }
            else
            st.push(*it);
        }
        return ans;
    }
    
public:
    long long solve(int X,int Y,string S){
        bool greater = X>Y;
      return evaluate(greater?'p':'r',greater?'r':'p',S,
                    greater?X:Y,greater?Y:X);
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends