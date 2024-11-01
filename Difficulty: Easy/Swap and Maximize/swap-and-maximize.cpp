//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        vector<int>ans;
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        while(i<j)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j--;
        }
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        long long sum=abs(ans[ans.size()-1]-ans[0]);
        for(int i=0;i<ans.size()-1;i++)
        {
            sum+=abs(ans[i]-ans[i+1]);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends