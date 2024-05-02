//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int i,vector<int>& v,int vis[],vector<int> adj[])
    {
        vis[i]=1;
        v.push_back(i);
        for(auto it:adj[i])
        {
            if(!vis[it])  
            {
                dfs(it,v,vis,adj);
                
            }
        }
    }
    
    
   
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int start=0;
        int vis[V]={0};
        vector<int>v;
        dfs(start,v,vis,adj);
        return v;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends