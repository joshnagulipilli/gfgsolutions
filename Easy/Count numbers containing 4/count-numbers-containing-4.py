
class Solution:
    def countNumberswith4(self, n : int) -> int:
        # code here
        ans=0
        for i in range(4,n+1):
            while i:
                if(i%10==4):
                    ans+=1
                    break
                i//=10
        return ans
        



#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        obj = Solution()
        res = obj.countNumberswith4(n)

        print(res)

# } Driver Code Ends