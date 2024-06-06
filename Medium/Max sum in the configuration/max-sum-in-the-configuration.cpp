//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long res=0,sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=(long long)a[i];
            ans+=(long long)a[i]*i;
        }
        //each element contributes for 4 times , but 0 index includes so only for 3 times.
        //rather we subtarct one contribution of each element by sum.
        // cout<<ans<<" "<<sum;
        for(int i=0;i<n;i++){
            ans+=(long long)n*a[i]-sum;
            // cout<<ans<<" ";
            res=max(res,ans);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends