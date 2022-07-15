class Solution:
    def reverseBits(self, n: int) -> int:
                
        n = bin(n)       #converts decimal to binary
        n = n.replace('0b','')  #provides a string with "0b" at beginning, remove it
        
        #The zfill() method adds zeros (0) at the beginning of the string, until it reaches the specified length.
        n = n.zfill(32)      

        n = n[::-1] #reverse the string

        

        return int(n,2)  #convert binary string to decimal
    
    # AUDITY GHOSH
        