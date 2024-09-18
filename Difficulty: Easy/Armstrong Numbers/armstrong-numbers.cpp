//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
         int ans=0,temp=n,x=n;
    while(temp>0)
    {
        ans++;
        temp/=10;
    }
    int res=0;
    while(x>0)
    {
        int r=x%10;
        res=res+(pow(r,ans));
        x/=10;
    }
        return (res==n)?"true":"false";
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