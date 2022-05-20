class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        row, col = len(obstacleGrid), len(obstacleGrid[0])        
        
        dp=[[0] * (col+1) for i in range(row+1)]        
        dp[0][1]=1
                        
        for rows in range(1, row+1):
            for cols in range(1, col+1):
                if not obstacleGrid[rows-1][cols-1]:
                    dp[rows][cols] = dp[rows-1][cols] + dp[rows][cols-1]
         
        return dp[-1][-1]
        