//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	     int level=0;
	    int vis[V]={0};
	    queue<int> q;
	    q.push(0);
	    vis[0]=1;
	    while(!q.empty())
	    {
	        int sz=q.size();
	        for(int i=0;i<sz;i++)
	        {
	            int it=q.front();
	            q.pop();
	            if(it==X)
	            {
	                return level;
	            }
	            for(auto i:adj[it]){
	                if(!vis[i]){
	                    q.push(i);
	                    vis[i]=1;
	                }
	            }
	        }
	        level++;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends