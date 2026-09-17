class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        ans=0
        c=0
        for num in nums:
            if num!=1:
                ans =max(ans,c)
                c=0
            else:
               c=c+1
        return max(ans,c)