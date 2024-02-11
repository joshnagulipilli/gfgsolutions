//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        if(n==0) return {0};
        unordered_set<int>st;
        vector<int>ans={0};
        for(int i=1;i<=n;i++)
        {
            int p = ans[i-1]-i;
            if(p<=0 || st.find(p)!=st.end()) {
                p=ans[i-1]+i;
            }
            ans.push_back(p);
            st.insert(p);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends