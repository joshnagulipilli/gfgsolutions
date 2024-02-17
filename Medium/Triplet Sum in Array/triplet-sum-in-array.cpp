//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int x)
    {
        //Your Code Here
        sort(a,a+n);
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            if(i!=0 && a[i]==a[i-1]) continue;
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                sum=a[i]+a[j]+a[k];
                if(sum>x) k--;
                else if(sum==x) return 1;
                else j++;
            }
            while(j<k && a[j]==a[j-1]) j++;
            while(j<k && a[k]==a[k+1]) k--;
        }
        return 0;
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends