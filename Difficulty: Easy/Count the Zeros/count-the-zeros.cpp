//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        //using binary search
        int n=arr.size();
        if(arr[0]==0) return n;
        int len=0;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==1) 
            {
                low=mid+1;
            }
            else 
            {
                len=mid;
                high=mid-1;
            }
        }
        return n - len;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.countZeroes(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends