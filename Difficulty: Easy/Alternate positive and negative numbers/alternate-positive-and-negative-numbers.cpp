//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int>v,v1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                v.push_back(arr[i]);
            }
            else{
                v1.push_back(arr[i]);
            }
        }
        int ind=0;
        int i=0,j=0;
        while(i<v.size() && j<v1.size())
        {
            arr[ind++]=v[i++];
            arr[ind++]=v1[j++];
        }
        while(i<v.size())
        {
            arr[ind++]=v[i++];
        }
        while(j<v1.size())
        {
            arr[ind++]=v1[j++];
        }
       
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends