class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        nums.sort()
        for i in range(len(nums)):
            if i!=nums[i]:
                return i
        if i==len(nums)-1:
            return i+1