class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        even=[number for number in nums if number%2==0]
        odd=[number for number in nums if number%2==1]
        ans = [*even, *odd]
        return ans
        
        