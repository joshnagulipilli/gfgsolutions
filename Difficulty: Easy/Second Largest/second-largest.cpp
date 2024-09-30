//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxi=arr[0];
        int sec=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                sec=maxi;
                maxi=arr[i];
            }
            else if(arr[i]!=maxi && sec<arr[i])
            {
                sec=arr[i];
            }
        }
        return (sec==INT_MIN)?-1:sec;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends