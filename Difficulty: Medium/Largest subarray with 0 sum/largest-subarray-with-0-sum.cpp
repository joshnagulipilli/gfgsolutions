//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        int len=0;
        int maxi=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int i=0;
        int sum=0;
        while(i<n)
        {
            sum+=arr[i];
            if(sum==0)
            { 
                mp[sum]=i;
                maxi=max(maxi,i+1);
            }
            int rem=sum-0;
            if(mp.find(rem)!=mp.end())
            {
                len=i-mp[rem];
                maxi=max(len,maxi);
            }
            else if(mp.find(sum)==mp.end())
            {
            mp[sum]=i;
            }
            i++;
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends