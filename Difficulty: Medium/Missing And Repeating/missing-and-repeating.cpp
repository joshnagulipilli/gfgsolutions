//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
       multiset<int>ms(arr.begin(),arr.end());
       int repeat=-1,dou=-1;
       for(int i=1;i<=arr.size();i++)
       {
           if(ms.count(i)==2)  repeat=i;
           else if(ms.find(i)==ms.end()) dou=i;
           if(repeat!=-1 && dou!=-1) return {repeat,dou};
       }
       return {repeat,dou};
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends