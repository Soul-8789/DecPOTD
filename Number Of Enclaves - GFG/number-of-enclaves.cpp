//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int n,m;
  vector<pair<int,int> > dir={{0,1},{1,0},{0,-1},{-1,0}};
     void dfs(int i,int j,vector<vector<int>> &grid)
     {
         grid[i][j]=0;
         
        for(auto it:dir)
        {
            int x=it.first+i;
            int y=it.second+j;
            if(x>=0 && x<n && y>=0 && y<m &&grid[x][y]==1){
                dfs(x,y,grid);
            }
        }
     }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 ||i==n-1 ||j==m-1)
                {
                    if(grid[i][j]==1){
                        dfs(i,j,grid);
                    }
                }
            }
        }
        int cnt=0;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    if(grid[i][j]==1){
                        cnt++;
                       
                }
            }
        }
      return cnt;  
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends