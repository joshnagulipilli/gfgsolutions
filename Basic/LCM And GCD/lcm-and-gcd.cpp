//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
        long long gcd(long long int a, long long int b)
    {
         if (a == 0)
            return b;
        return gcd( b % a,a);
    }
    long long lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
     long long p=lcm(a,b);
     long long q=gcd(a,b);
     return {p,q};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends