class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_area = 0
         
        left = 0
        right = len(height)-1
        
        # two pointer approach, we want to get the maximum height, so shifting the one with lower height
        
        while left<right:
            area = (right-left)*min(height[left],height[right])
            if(height[left]>height[right]):
                right = right - 1
            else:
                left = left + 1
            max_area = max(area,max_area)
        
        return max_area
    
    #AUDITY GHOSH
        