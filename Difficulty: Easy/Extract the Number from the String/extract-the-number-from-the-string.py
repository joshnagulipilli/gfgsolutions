class Solution:
    def ExtractNumber(self,sentence):
        #code here
        arr=sentence.split(" ")
        fl=0
        lst=[]
        for i in arr:
            if i.isnumeric():
                lst.append(i)
        ans=[]
        for i in lst:
            if '9' not in i:
                ans.append(i)
        if(len(ans)<1):
            return -1
        ans=[int(x) for x in ans]
        return max(ans)
        


#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends