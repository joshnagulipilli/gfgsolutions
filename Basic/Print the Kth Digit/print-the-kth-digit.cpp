//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int k){
        // code here
        long long int p=pow(A,B);
        int r,c=0;
    
        while(p>0 && c<k)
        {
            r=p%10;
            p/=10;
            c++;
            if(c==k) return r;
        }
        return r;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends