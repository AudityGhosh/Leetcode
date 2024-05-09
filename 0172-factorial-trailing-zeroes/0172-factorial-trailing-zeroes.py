class Solution:
    def trailingZeroes(self, n: int) -> int:
        if n is 0 or n is 1:
            return 0
        else:
            # we only need to search how many 5s are there in the factorial, because number of 2s will be greater than number of 5s
            power_of_5 = 1
           
            ans = 0
            
            # the formula for searching number of 5s in factorial is to sum (number of multiples of 5 + multiples of 25+ multiples of 125... until number of multiples becomes 0)
            
            multiples_of_it_in_range=-1
            
            while(multiples_of_it_in_range!=0):
                multiples_of_it_in_range = (n//(5**power_of_5))
                ans+= multiples_of_it_in_range
                power_of_5 = power_of_5+1
            
            return ans
        
        #Thanks Greg
        #AUDITY GHOSH
        