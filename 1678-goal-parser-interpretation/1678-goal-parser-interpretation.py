class Solution:
    def interpret(self, command: str) -> str:
        ans=""
        for i in range(0,len(command)):
            if command[i]=="G":
                ans+="G"
            elif command[i:i+2] =="()":
                ans+="o"
            elif command[i:i+4] =="(al)":
                ans+="al"
        return ans
                
        