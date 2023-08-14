//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int fib1=0;
        int fib2=1;
        int fib;
        for(int i=2;i<=n;i++)
        {
            fib=(fib1+fib2)%1000000007;
            fib1=fib2;
            fib2=fib;
        }
        return fib;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends