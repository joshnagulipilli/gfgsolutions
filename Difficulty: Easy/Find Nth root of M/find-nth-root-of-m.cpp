//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int fun(int n,int m ,int mid)
	{
	    long long p=1;
	    for(int i=1;i<=n;i++)
	    {
	       p=p*mid;
	       if(p>m) return 2;
	    }
	    
	    if(p==m) return 1;
	    return 0;
	}
	
	
	
	
	
	
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=1,high=m;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        int ans=fun(n,m,mid);
	        if(ans==1)
	        {
	            return mid;
	        }
	        else if(ans==0) low=mid+1;
	        else high=mid-1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends