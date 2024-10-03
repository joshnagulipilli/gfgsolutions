//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    long long subCount(vector<int>& arr, int k) {
        // Your code goes here
        unordered_map<long long,long long>mp;
        mp[0]=1;
        int i=0;
        long long sum=0;
        long long ans=0;
        while(i<arr.size())
        {
            sum+=arr[i];
            
            int rem=sum%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(mp.find(rem)!=mp.end())
            {
                ans+=mp[rem];
            }
                mp[rem]++;
            i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        cout << ob.subCount(arr, d);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends