//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(vector<int>& arr) {
        // Complete the function
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]<=1) 
            {
                continue;
            }
            else return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        bool res = obj.areElementsContiguous(arr);
        if (res)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        // cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends