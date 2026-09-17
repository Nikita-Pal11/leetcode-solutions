class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        ans=0
        for i in range(len(hours)):
            if hours[i]>=target:
                ans=ans+1
        return ans