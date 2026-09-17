class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        seen = set()
        i=0
        for num in nums:
            if num not in seen:
                seen.add(num)
                nums[i]=num
                i=i+1
        return i
            