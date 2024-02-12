//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long ans=0;
        int mod = 1000000007;
        int cnt=1;
        for(int i=1;i<=n;i++)
        {
            long long p=1;
            for(int j=1;j<=i;j++)
            {
               p=(p*cnt)%mod;
               cnt++;
               
            }
            ans=(ans+p)%mod;
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends