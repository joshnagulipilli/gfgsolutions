//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  long long fun2(long long a,long long b)
  {
      if(a==0) return b;
      if(b==0) return a;
      if(a>b) return fun2(a%b,b);
      return fun2(b%a,a);
  }
  
  
   long long fun1(long long a,long long b)
   {
    return (a*b)/fun2(a,b);
   }
  
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long lcm=fun1(A,B);
        long long gcd=fun2(A,B);
        return {lcm,gcd};
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