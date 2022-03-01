class Solution {
public:
    int  bin(int n)
  {
    int i;
        int cnt=0;
    
    for (i = 1 << 30; i > 0; i = i / 2)
    {
      if((n & i) != 0)
      {
        cnt++;
      }
      
    }
        return cnt;
  }
    vector<int> countBits(int n) {
        vector<int>ans;
        
        for(int i=0;i<=n;i++)
        {
          ans.push_back(bin(i));  
            
        }
        return ans;
        
        
    }
};