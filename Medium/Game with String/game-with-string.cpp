//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>mp;
        for(int i=0;s[i];i++)
        {
            mp[s[i]]++;
        }
        priority_queue<int>ans;
        for(auto i:mp)
        {
            ans.push(i.second);
        }
        while(k--)
        {
            int p=ans.top();
            ans.pop();
            p--;
            if(p!=0)
            {
                ans.push(p);
            }
        }
       int res=0;
       while(!ans.empty())
       {
          res+=pow(ans.top(),2);
          ans.pop();
           
       }
       return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends