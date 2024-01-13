//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
        // Your code goes here
         double median;
       int i=0,n=nums1.size();
       int j=0,m=nums2.size();
       vector<int>res;
       while(i<n && j<m){
           if(nums1[i]<=nums2[j]){
               res.push_back(nums1[i]);
               i++;
           }
           else if(nums2[j]<nums1[i]){
               res.push_back(nums2[j]);
               j++;
           }
       }
           while( i<n)
           {
            res.push_back(nums1[i]);
            i++;
           }
            while( j<m)
            {
            res.push_back(nums2[j]);
            j++;
            }
            int p= res.size()/2;
            if(res.size()%2!=0){         
                median = res[p];
            }
            else {
                median = (res[p] + res[p-1])/(2.0);
            }
            return median;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends