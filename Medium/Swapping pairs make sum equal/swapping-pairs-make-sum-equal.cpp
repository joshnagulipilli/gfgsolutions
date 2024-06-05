//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+m);
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=a[i];
        }
        int sum2=0;
        for(int i=0;i<m;i++)
        {
            sum2+=b[i];
        }
        if(sum1==sum2)
            return 1;
        int j=0;
        int i=0;
        while(i<n && j<m)
        {
            long sumA=sum1-a[i]+b[j];
            long sumB=sum2-b[j]+a[i];
            if(sumA==sumB)
                {
                    return 1;
                }
                else if(sumA>sumB)
                {
                    i++;
                }
                else
                    j++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends