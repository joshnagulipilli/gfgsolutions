//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
       vector<string>v;
       string p="";
       for(int i=0;str[i];i++)
       {
           if(str[i]!='.')
           {
               p+=str[i];
           }
           else
           {
               v.push_back(p);
                // cout<<p<<" ";
               p.clear();
           }
       }
      v.push_back(p);
    //   cout<<p<<endl;
      p.clear();
       for(int i=v.size()-1;i>=0;i--)
       {
           
           p+=v[i];
           if( i>0)
           {
               p+=".";
           }
        //   cout<<p<<endl;
       }
       return p;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends