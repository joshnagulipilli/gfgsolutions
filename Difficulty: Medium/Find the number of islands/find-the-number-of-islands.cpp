//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>> &grid, vector<vector<int>> &vis, int i, int j,int n, int m)
    {
        vis[i][j] = -1;
        queue<pair<int,int>> q;
        
        q.push({i,j});
        
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
            for(int delrow = -1; delrow <= 1; delrow++)
            {
                for(int delcol = -1; delcol <= 1; delcol++)
                {
                    int newrow = row + delrow;
                    int newcol = col + delcol;
                    
                    if(newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && 
                    grid[newrow][newcol] == '1' && vis[newrow][newcol] == -1)
                    {
                        vis[newrow][newcol] = 1;
                        q.push({newrow,newcol});
                    }
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
          int ans= 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,-1));
        
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < m;j++)
            {
                if(vis[i][j] == -1 && grid[i][j] == '1')
                {
                    ans++;
                    bfs(grid,vis,i,j,n,m);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends