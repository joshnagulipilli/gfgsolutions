//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  bool flag = false; //to keep track word is found 
  
  void search(vector<vector<char>>& mat , string& word , int row , int col,int i){
      int n1 = mat.size();
      int n2=mat[0].size();
      if(row<0 || col<0 || row>=n1 || col>=n2){
          return;
      }
      if(word[i]==mat[row][col]){
          if(word.size()-1 == i){
              flag=true;
              return ;
          }
          
          char c = mat[row][col];
          mat[row][col] = '.';
          
          search(mat,word,row-1,col,i+1);
          search(mat,word,row+1,col,i+1);
          search(mat,word,row,col+1,i+1);
          search(mat,word,row,col-1,i+1);
          
          mat[row][col]=c;
      }
      return;
  }
  public:
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int n1=mat.size();
        int n2=mat[0].size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(mat[i][j]==word[0]){
                    search(mat,word,i,j,0);
                }
            }
        }
        return flag;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends