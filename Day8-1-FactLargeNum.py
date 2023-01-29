import math


class Solution:
    def factorial(self, N):
        #code here
        ans = math.factorial(N)
        an = []
        while(ans>0):
            temp = ans%10
            an.append(temp)
            ans = ans//10
        res = an[::-1]
        return res


N = int(input())
ob = Solution()
ans = ob.factorial(N)
for i in ans:
    print(i, end='')
print()
