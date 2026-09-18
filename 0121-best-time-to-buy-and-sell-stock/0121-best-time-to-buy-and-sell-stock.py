class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        mn=prices[0]
        ans=0
        for num in prices:
            mn=min(num,mn)
            ans =max(num-mn,ans)
        return ans