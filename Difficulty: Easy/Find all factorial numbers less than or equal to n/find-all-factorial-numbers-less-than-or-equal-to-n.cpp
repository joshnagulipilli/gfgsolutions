//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long fact(long long n)
    {
        if(n==1 ) return 1;
        return n*fact(n-1);
    }
    
    
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long>ans;
        long long res=1,i=2;
        while(res<=n)
        {
            ans.push_back(res);
            res=fact(i);
            
              i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends