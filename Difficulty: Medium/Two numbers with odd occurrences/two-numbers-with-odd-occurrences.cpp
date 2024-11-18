//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        // code here
        long long int x = 0;
        for(int i=0;i<n;i++){
            x = x ^ arr[i]; 
        }
        long long int right = (x & (x-1)) ^ x;
        long long int b1 =0,b2=0;
        for(int i=0;i<n;i++){
            if(right & arr[i]){
                b1=b1^arr[i];
            }
            else{
                 b2=b2^arr[i];
            }
        }
        return {max(b1,b2),min(b1,b2)};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends