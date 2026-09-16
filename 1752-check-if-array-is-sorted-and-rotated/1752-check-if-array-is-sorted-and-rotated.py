class Solution:
    def check(self, nums: List[int]) -> bool:
        y= sorted(nums)
        tl=[]
        flag=False
        for i in range(len(nums)):
            if nums[i]==y[0]:
                print(nums[i:])
                print(nums[0:i])
                tl=nums[i:]+nums[0:i]
                if tl==y:
                    flag=True
        return flag
        