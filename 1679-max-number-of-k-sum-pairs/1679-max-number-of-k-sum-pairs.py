class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        low=0
        high=len(nums)-1
        cnt=0
        while low<high:
            summa = nums[low]+nums[high]
            if summa==k:
                cnt+=1
                low+=1
                high-=1
            elif summa<k:
                low+=1
            elif summa>k:
                high-=1
        return cnt
        