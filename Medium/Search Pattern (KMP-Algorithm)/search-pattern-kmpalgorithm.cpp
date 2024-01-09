//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string s)
        {
            //code here
            vector<int>v;
            int k=pat.length();
            int n=s.length();
            for(int i=0;i<=n-k;i++){
                int j;
                for(j=0;j<k;j++){
                    if(s[i+j]!=pat[j]) break;
                }
                if(j==k) v.push_back(i+1);
            }
            return v;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends