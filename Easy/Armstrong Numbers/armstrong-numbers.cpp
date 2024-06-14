//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int cnt=0;
        int x=n;
        while(x>0){
          cnt++;
          x/=10;
        }
        int res=0,p;
        int temp=n;
        while(n>0)
        {
            p=(n%10);
            res=res+(pow(p,cnt));
            n/=10;
        }
        return (temp==res)?"Yes":"No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends