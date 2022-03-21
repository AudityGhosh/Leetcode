class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        string_started_index, string_end_index = 0, 0
        ans = []
        for index, value in enumerate(s):
            string_end_index = max(string_end_index, s.rfind(value)) #whose last occurance is farthest
            if string_end_index==index: 
                ans.append(string_end_index-string_started_index+1)
                string_started_index = index+1
        return ans
            
            
        