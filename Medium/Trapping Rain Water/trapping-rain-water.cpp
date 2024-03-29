//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long sol=0;
        int pref[n],suff[n];
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            if(maxi<arr[i])
            {
                maxi=arr[i];
            }
            pref[i]=maxi;
        }
        maxi=arr[n-1];
        for(int j=n-1;j>=0;j--){
            if(maxi<arr[j]){
                maxi=arr[j];
            }
            suff[j]=maxi;
        }
        for(int i=0;i<n;i++){
            sol+=(min(pref[i],suff[i])-arr[i]);
        }
        return sol;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends