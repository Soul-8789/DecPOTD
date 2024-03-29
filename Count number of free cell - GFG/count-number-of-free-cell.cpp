//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      
    vector<long long int> ans;
     int x=0;
     int y=0;
     vector<int> row(100010),col(100010);
    for(auto e:arr){
         row[e[0]]++;
         if(row[e[0]]==1)x++;
         col[e[1]]++;
         if(col[e[1]]==1)y++;
        long long int fans=1ll*n*n-(1ll*n*(x+y)-(x*y));
        ans.push_back(fans);
    }
    
    return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends