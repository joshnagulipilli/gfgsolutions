//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        int n=q.size();
        vector<int>v;
        queue<int>qp;
        for(int i=0;i<k;i++){
           int p = q.front();
           v.push_back(p);
           q.pop();
        }
        for(int i=k-1;i>=0;i--){
            qp.push(v[i]);
        }
        for(int i=k;i<n;i++){
            int p=q.front();
            qp.push(p);
            q.pop();
        }
        return qp;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends