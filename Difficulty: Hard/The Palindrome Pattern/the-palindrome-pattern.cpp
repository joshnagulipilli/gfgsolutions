//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int c=0;
        string p="";
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<(n/2)+(n%2);j++)
            {
                if(arr[i][j]==arr[i][n-j-1])
                {
                    c++;
                }
            }
            if(c==(n/2)+(n%2)) 
            {
                p+=to_string(i);
                p+=" ";
                p+="R";
                return p;
            }
        }
        
        for(int j=0;j<n;j++)
        {
            c=0;
            for(int i=0;i<(n/2)+(n%2);i++)
            {
                if(arr[i][j]==arr[n-i-1][j])
                {
                    c++;
                }
            }
            if(c==(n/2)+(n%2)) {
                p+=to_string(j);
                p+=" ";
                p+="C";
                return p;
                
            }
            
        }
        
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends