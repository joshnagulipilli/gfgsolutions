//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int xcnt=0,ycnt=0,ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x) xcnt++;
            if(arr[i]==y) ycnt++;
            int rem=(xcnt-ycnt);
            if(mp.find(rem)!=mp.end())
            {
                ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
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
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends