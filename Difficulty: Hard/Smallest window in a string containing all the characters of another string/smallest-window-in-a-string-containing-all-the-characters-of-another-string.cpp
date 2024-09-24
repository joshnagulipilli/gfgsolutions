//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        if(s.size()<p.size()) return "-1";
        vector<int>mp(26,0);
        int l=0,r=0;
        for(int i=0;i<p.size();i++)
        {
            mp[p[i]-'a']++;
        }
        int min_length=INT_MAX,index=-1,cnt=0;
        while(r<s.size())
        {
            if(mp[s[r]-'a']>0) cnt+=1;
              mp[s[r]-'a']--;
        
         while(cnt==p.size())
         {
            if(r-l+1 < min_length)
            {
                min_length=r-l+1;
                index=l;
            }
            
            mp[s[l]-'a']++;
            if(mp[s[l]-'a']>0) cnt-=1;
            l++;
        }
        r++;
        }
        return (index==-1)?"-1":(s.substr(index,min_length));
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends