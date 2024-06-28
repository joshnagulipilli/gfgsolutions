//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    
    long long fun(int arr[],int mid,int n)
    {
        long long cnt=1 , res=0;
        for(int i=0;i<n;i++)
        {
            if(res+arr[i] <= mid)
            {
               
                res+=arr[i];
            }
            else{
                 cnt++;
                 res=arr[i];
            }
        }
        return cnt;
    }
    
    
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n) return -1;
        long long sum=0;
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        long long low=maxi,high=sum;
        // long long ans=-1;
        while(low<=high)
        {
            int mid=(low+high) >> 1;
            if(fun(arr,mid,n) > m )
            {
                // ans=mid;
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends