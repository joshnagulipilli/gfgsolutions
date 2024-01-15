//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:

int solve(int i,int total,vector<int> &cost, vector<vector<int>>&dp)
    {
        if(i==cost.size()) return 0;
        if(dp[i][total] !=-1) return dp[i][total];
        int pick = INT_MIN;
        if(total>=cost[i])
        {
            int t = total-cost[i] +(cost[i]*9)/10;
            pick  = 1+solve(i+1,t,cost,dp);
        }
        int notPick = solve(i+1,total,cost,dp);
        return dp[i][total] = max(pick,notPick);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        vector<vector<int>>dp(n+1,vector<int>(total+1,-1));
        return solve(0,total,cost,dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends