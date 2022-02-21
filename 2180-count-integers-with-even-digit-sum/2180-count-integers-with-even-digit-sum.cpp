class Solution {
public:
    
   
    
    int countEven(int num) {
         
        int i,j,k,m,n,t;
        int cnt=0;
        for(i=1;i<=num;i++)
        {
            string s = to_string(i);
            int sum=0;
            for(j=0;j<s.size();j++)
                sum+=(s[j]-'0');
            
            if(sum%2==0)
                cnt++;
            
        }
        return cnt;
        
        
        
    }
};