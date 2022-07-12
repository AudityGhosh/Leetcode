class Solution {
public:
    int getSum(int a, int b) {
        
        int ans=a;
        
        if (b > 0)
        {
          for(int i=0;i<b;i++) 
              ans++; 
        }
        
        if (b < 0) 
        { 
           for(int i=b;i<0;i++)
               ans--;
        }
        
        return ans;
    
    
        
    }
};