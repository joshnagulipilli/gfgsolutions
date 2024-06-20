//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        if(n==1 || m==1) {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    ans.push_back(matrix[i][j]);
                }
            }
            return ans;
        }
        int top=0,right=m-1,left=0,bottom=n-1;
        for(int i=0;i<right;i++)
        {
            ans.push_back(matrix[top][i]);
        }
        for(int i=0;i<bottom;i++)
        {
            ans.push_back(matrix[i][right]);
        }
        for(int i=right;i>=0;i--)
        {
          ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        for(int i=bottom;i>0;i--)
        {
            ans.push_back(matrix[i][left]);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends