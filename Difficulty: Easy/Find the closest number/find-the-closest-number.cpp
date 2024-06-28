//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
    int fun1(int arr[],int n,int k)
    {
      int low=0,high= n-1;
      int ans=n;
      while(low<=high)
      {
          int mid=(low+high) >> 1;
          if(arr[mid]<=k)
          {
              ans=arr[mid];
              low=mid+1;
          }
          else 
          high=mid-1;
      }
      return ans;
    }
    
    int fun2(int arr[],int n, int k)
    {
      int low=0,high= n-1;
      int ans=n;
      while(low<=high)
      {
          int mid=(low+high) >> 1;
          if(arr[mid] > k)
          {
              ans=arr[mid];
              high=mid-1;
          }
          else low=mid+1;
      }
      return ans;
    }
    
    
    
    
    
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        if(n==1 && arr[0]==k) return arr[0];
        int lb=fun1(arr,n,k);
        int ub=fun2(arr,n,k);
        // cout<<lb<<" "<<ub<<" ";
        if(lb==k || ub==k) return k;
        else if(abs(lb-k) >= abs(ub-k)) return ub;
        return lb;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends