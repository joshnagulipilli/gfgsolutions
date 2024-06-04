//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int n=s.size();
        bool carry=0;
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                if(s[i]=='1'){
                    carry=1;
                    ans+='0';
                }
                else {
                    ans+='1';
                }
            }
            
            else{
                if(carry==1 && s[i]=='1'){
                    ans+='0';
                }
                else if(carry==0 && s[i]=='1'){
                    ans+='1';
                }
                else if(carry==1 && s[i]=='0'){
                    ans+='1';
                    carry=0;
                }
                else {
                    ans+='0';
                }
            }
        }
        if(carry==1) ans+='1';
        reverse(ans.begin(),ans.end());
        int ind=0;
        for(int i=0;ans[i];i++){
            if(ans[i]=='1')
            {
                ind=i;
                break;
            }
        }
        string res="";
        for(int i=ind;ans[i];i++){
            res+=ans[i];
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends