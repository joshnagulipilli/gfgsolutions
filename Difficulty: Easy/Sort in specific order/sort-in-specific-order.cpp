//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
        int n=arr.size();
        int left=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                swap(arr[i],arr[left]);
                left++;
            }
        }
        sort(arr.begin(),arr.begin()+left,greater<int>());
        sort(arr.begin()+left,arr.end());
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends