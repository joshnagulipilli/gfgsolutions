//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here

   vector<vector<int>> ans;
    unordered_set<string> set;
    
    for(int i=0; i<row; i++){
        string s = "";
        for(int j=0; j<col; j++){
            if(M[i][j] == 1)
                s.push_back('1');
            else 
                s.push_back('0');
        }
        if(set.find(s) == set.end()){
            vector<int> temp;
            for(auto j : s){
                if(j == '1')
                    temp.push_back(1);
                else 
                    temp.push_back(0);
            }
            
            ans.push_back(temp);
        }
        set.insert(s);
    }
    
    return ans;
}