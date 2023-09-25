class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        return chr(  sum([ord(x) for x in t]) - sum([ord(x)  for x in s])) 
    
        #ord gets the unicode of a character
        #sum summations
       
        