//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int>ans;
        int MOD=1e9+7;
        int fib=0,fib1=1,fib2;
        ans.push_back(fib);
        ans.push_back(fib1);
        for(int i=1;i<n;i++)
        {
            fib2=(fib+fib1)%MOD;
            ans.push_back(fib2);
            fib=fib1;
            fib1=fib2;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends