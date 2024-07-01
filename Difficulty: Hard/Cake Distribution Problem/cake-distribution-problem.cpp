//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    
    int fun(vector<int>& arr,int mid,int n)
    {
        int c=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+arr[i] < mid)
            {
                sum+=arr[i];
            }
            else
            {
                c++;
                sum=0;
            }
        }
        return c;
    }
    
    
    
    int maxSweetness(vector<int>& arr, int N, int K) {
    // Write your code here.
    
    int low=*min_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    int ans=0;
    while(low<=high)
    {
        int mid=(low+high) >> 1;
        if(fun(arr,mid,N) >= K+1 )
        {
             ans=mid;
             low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends