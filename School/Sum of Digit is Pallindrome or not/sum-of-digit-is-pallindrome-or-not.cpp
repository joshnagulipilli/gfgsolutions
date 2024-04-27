//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int r,res=0;
        while(n>0){
            r=n%10;
            res+=r;
            n/=10;
        }
        int temp=res,q,p=res,sum=0;
        while(p>0)
        {
            q=p%10;
            sum=(sum*10)+q;
            p/=10;
        }
        return res==sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends