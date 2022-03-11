class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort()
        total = sum(salary)
        total=total-salary[0]-salary[len(salary)-1]
        return total/(len(salary)-2)
        
        