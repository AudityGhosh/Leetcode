class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        total = 0
        for i in range(1, len(arr)+1):
            if i%2==1:
                for j in range(len(arr)+1-i): # first number of each partial sum
                    part = sum(arr[j:j+i])
                    total += part
        return total
        