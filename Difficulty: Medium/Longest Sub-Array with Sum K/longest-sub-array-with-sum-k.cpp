//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mp;
        int sum=0;
        int maxi=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==k)
            {
               maxi=i+1;
            }
            int rem = sum-k;
            if(mp.find(rem)!=mp.end())
            {
                maxi = max(maxi,i-mp[rem]);
            }
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends