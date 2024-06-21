#User function Template for python3


class Solution:
    def compareFrac (self, str):
        
        # code here
        arr=list(str.split(","))
        for i in range(len(arr)):
            if eval(arr[i])==eval(arr[i+1]):
                return "equal"
            elif eval(arr[i])>eval(arr[i+1]):
                return arr[i]
            else:
                return (arr[i+1].strip())

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import re

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        str = input()
        print(ob.compareFrac(str))

# } Driver Code Ends