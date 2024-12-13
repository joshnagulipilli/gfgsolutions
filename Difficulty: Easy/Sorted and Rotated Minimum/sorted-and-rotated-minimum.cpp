//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();
        int l=0,h=n-1;
        int ans=INT_MAX;
        while(l<=h){
            int m=(l+h)/2;
            if(arr[l]<=arr[h]){
                return min(ans,arr[l]);
            }
            if(arr[l]<=arr[m]){
                ans=min(ans,arr[l]);
                l=m+1;
            }
            else{
                ans=min(ans,arr[m]);
                h=m-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends