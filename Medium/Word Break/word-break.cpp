//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        int m=s.size();
        vector<bool>dp(m+1,0);
        dp[0]=1;
        for(int i=0;i<m;i++)
        {
            if(!dp[i]) continue;
            string str;
            for(int j=i;j<m;j++)
            {
                str+=s[j];
                for(auto _: dictionary)
                {
                    if(str==_) { dp[j+1]=1; break;}
                }
            }
        }
        return dp[m];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends