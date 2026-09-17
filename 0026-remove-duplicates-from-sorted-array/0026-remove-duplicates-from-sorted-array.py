class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        l=0
        r=l+1
        while(r<len(nums)):
            while(r<len(nums) and nums[l]==nums[r]):
                 nums.pop(r)
            l=l+1
            r=l+1
        return len(nums)