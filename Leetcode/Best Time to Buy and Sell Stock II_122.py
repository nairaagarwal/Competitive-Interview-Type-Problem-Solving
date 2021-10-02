class Solution:
    def maxProfit(self, lis: List[int]) -> int:
        i = 0
        profit = 0
        n = len(lis)
        if(n==1):
            profit = 0
        while(i<n):
            if(i==n-1):
                break
            while(i<n-1 and lis[i+1] <= lis[i]):
                i+=1
            buy = i
            # i+=1
            # print("buy= ", buy)
            while(i<n-1 and lis[i+1] >= lis[i]):
                i+=1
            sell = i
            # print("sell= ", sell)
            profit += (lis[sell]-lis[buy])
            # print(profit)
        # print(profit)
        return(profit)
