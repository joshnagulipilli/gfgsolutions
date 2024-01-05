//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int n)
	{
	    // Code here
	    long long sol=0;
	    long long mod=1000000007;
	    long long x=2;
	    long long y=3;
	    if(n==1) return 4;
	    if(n==2) return 9;
	    for(int i=3;i<=n;i++){
	        sol=((x%mod)+(y%mod))%mod;
            x=y%mod;
	        y=sol%mod;
	    }
	    return (int)((y*y)%mod);
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends