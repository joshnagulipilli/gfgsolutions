//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	
bool prime(int n)
	{
	    if(n==1)return false;
	    for(int i=2;i*i<=n;i++)
	    if(n%i==0)
	    return false;
	    return true;
	}
   	vector<int> prime_pairs(int n){
   	    vector<int>v;
   	    for(int i=2;i<=n;i++)
   	     for(int j=2;j<=n;j++)
   	            if(prime(i)&&prime(j)&&(i*j<=n))
   	            {v.push_back(i);v.push_back(j);}
   	 return v;
    }  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<int> ans = ob.prime_pairs(n);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends