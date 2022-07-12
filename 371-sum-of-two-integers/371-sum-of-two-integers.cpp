class Solution {
public:
    int getSum(int a, int b) {
        
        int ans=a;
        
        if (b > 0)      // try adding 8 + 5, or -8 + 5
        {
          for(int i=0;i<b;i++) 
              ans++; 
        }
        
        if (b < 0)      // try adding 8 - 5, or -8 - 5
        { 
           for(int i=b;i<0;i++)
               ans--;
        }
         
        return ans;       // if b is zero, ans is a
        
        
        /*AUDITY GHOSH*/
    
    
        
    }
};