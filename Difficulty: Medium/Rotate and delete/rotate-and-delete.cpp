//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        deque<int>dq(arr.begin(),arr.end());
        for(int k=1;k<dq.size();k++)
        {
            dq.push_front(dq.back());
            dq.pop_back();
            
            int del=dq.size()-k;
            if(del<0) del=0;
            dq.erase(dq.begin()+del);
        }
        return dq.front();
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
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends