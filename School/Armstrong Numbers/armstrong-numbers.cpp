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
        int c=0,temp=n,x=n,r,res=0;
        while(x>0)
        {
            c++;
            x/=10;
        }
        while(n>0)
        {
            r=n%10;
            res=res+(pow(r,c));
            n/=10;
        }
        return (res==temp)?"Yes":"No";
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