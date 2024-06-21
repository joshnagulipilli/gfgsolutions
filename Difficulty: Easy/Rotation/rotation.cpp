//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low=0,high=n-1;
	    int ind=-1;
	    int ans=INT_MAX;
	    while(low<=high)
	    {
	        int mid=(low+high)/2;
	        if(arr[low]<=arr[high])
	        {
	            if(arr[low]<ans)
	            {
	            ind=low;
	            ans=arr[low];
	            }
	            break;
	        }
	        if(arr[low]<=arr[mid])
	        {
	            if(arr[low]<ans)
	           {
	            ind=low;
	           }
	            low=mid+1;
	        }
	        else{
	            if(arr[mid]<ans)
	            {
	            ind=mid;
	            ans=arr[mid];
	            }
	            high=mid-1;
	        }
	    }
	    return ind;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends