class Solution:
    def minDistance(self, str1: str, str2: str) -> int:
        m = len(str1)
        n = len(str2)
        dp = [[0 for _ in range(n+1)] for _ in range(m+1)]
        for i in range(m+1):
            for j in range(n+1):
                if i==0:                # first strig empty
                    dp[i][j] = j       
                elif j==0:              # second string empty
                    dp[i][j] = i            
                elif str1[i-1] == str2[j-1]:
                    dp[i][j] = dp[i-1][j-1]
                else:
                    dp[i][j] = 1 +  min(dp[i][j-1],       # insert
                                        dp[i-1][j],       # remove
                                        dp[i-1][j-1])     # replace
        return dp[m][n]