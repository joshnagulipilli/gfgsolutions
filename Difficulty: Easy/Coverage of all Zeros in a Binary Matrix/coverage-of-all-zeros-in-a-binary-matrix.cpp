//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:




    int FindCoverage(vector<vector<int>>&mat){
        // Code herei
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    
                    if(i>0)   ans+= mat[i-1][j];
                    if(j<m-1) ans+= mat[i][j+1];
                    if(j>0)   ans+= mat[i][j-1];
                    if(i<n-1) ans+= mat[i+1][j];
                }
                // cout<<ans<<" ";
            }
            // cout<<endl;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		Solution obj;
		int ans = obj.FindCoverage(matrix);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends