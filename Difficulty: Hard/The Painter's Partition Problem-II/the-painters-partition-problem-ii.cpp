//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    
    long long fun(int arr[],int mid,int n)
    {
        long long c=1, res=0;
        for(int i=0;i<n;i++)
        {
            if(res+arr[i] <= mid)
            {
                res+=arr[i];
            }
            else {
                c++;
                res=arr[i];
            }
        }
        return c;
    }
  
  
  
    long long minTime(int arr[], int n, int k)
    {
      long long sum=0;
      int maxi=INT_MIN;
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
          maxi=max(arr[i],maxi);
      }
      long long low=maxi,high=sum;
      while(low<=high)
      {
          int mid=(low+high) >> 1;
          if(fun(arr,mid,n)>k)
          {
              low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
      return low;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends