//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        int c=0;
        double ac=3.14*r*r;
        int d=2*r;
        for(int l=1;l<d;l++){
            for(int b=1;b<d;b++){
                double ra=l*b;
                if(ra < ac){
                    double dia = sqrt((l*l) + (b*b));
                    if(dia <= d) c++;
                }
            }
        }
       return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends