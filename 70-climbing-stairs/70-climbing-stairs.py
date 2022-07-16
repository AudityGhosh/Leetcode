class Solution:
    def climbStairs(self, n: int) -> int:
        
        # if we explore the pattern for different values of n, we get a fibonacci series 
        fib = [0 for i in range(n+2)]
        fib[0]=0
        fib[1]=1
        
        for i in range(2,n+2):
            fib[i] = fib[i-1]+fib[i-2]
        
        return fib[n+1]
        
        
        
        