//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int cnt=0,temp=n;
        while(temp>0)
        {
            int r=temp%10;
            if(r!=0 && n%r==0)
               cnt++;
            temp/=10;
        }
        // cout<<cnt;
        return cnt; 
        }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends