class Solution:
    def findDuplicate(self, nums: list[int]) -> int:
        d = [0] * (len(nums) + 1)
        for num in nums:
            if d[num]==1:
                return num
            d[num]=d[num]+1
        return -1