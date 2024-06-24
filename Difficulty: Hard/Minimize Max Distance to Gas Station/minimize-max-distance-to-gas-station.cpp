//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  double check(double mid,vector<int> &arr)
  {
      int c=0;
      for(int i=1;i<arr.size();i++)
      {
          int x=(arr[i]-arr[i-1])/mid;
      if((arr[i]-arr[i-1])/mid == x*mid)
      {
          x--;
      }
      c+=x;
      }
      return c;
  }
  
  
  
  
    double findSmallestMaxDist(vector<int> &arr, int k) {
        // Code here
        int n=arr.size();
        double high=0 ,low=0;
        for(int i=0;i<n-1;i++)
        {
            high=max(high,(double)(arr[i+1]-arr[i]));
        }
        double diff=1e-6;
        while(high-low > diff)
        {
            double mid=(low+high)/(2.0);
            if(check(mid,arr)>k) low=mid;
            else 
            {
                high=mid;
            }
        }
        return high;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
    }
    return 0;
}
// } Driver Code Ends