//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int n=arr.size();
        int swaps=0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(i!=v[i].second)
            {
                swap(v[v[i].second],v[i]);
                swaps++;
                i--;
        }
        }
        return swaps==2 || swaps==0;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends