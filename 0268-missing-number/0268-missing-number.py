class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        t=sum(nums)
        n=len(nums)
        return int((n*(n+1))/2)-t