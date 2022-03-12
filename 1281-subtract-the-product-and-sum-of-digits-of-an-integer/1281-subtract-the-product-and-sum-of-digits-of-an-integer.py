class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        suma = 0
        mul = 1
        while(n>0):
            rem=n%10
            
            suma+=rem
            mul*=rem
            n=n//10
        return mul-suma
            