//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int cnt=0;
	    for(int i=n-1;i>=2;i--) // since 2 elements are minimum to get sum
	    {
	        int left=0;
	        int right=i-1;
	        int target=arr[i];
	        while(left<right)
	        {
	            int sum=arr[left]+arr[right];
	            if(sum==target)
	            {
	                cnt++;
	                right--;
	                left++;
	            }
	            else if(sum<target)
	            {
	                left++;
	            }
	            else right--;
	        }
	    }
	    return cnt;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends