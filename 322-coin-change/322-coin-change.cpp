class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        
        //coin change dp
        vector<long> dp(amount+1);  
        dp[0] = 0;
        
        for(int i =1;i<=amount;i++)
        {            
            long mini = INT_MAX;
            
               for(int j =0;j<coins.size();j++)
               {                  
                   long s = i - coins[j];
                   
                   if(s>=0)                     mini = min(mini ,1+dp[s]);                   
               }
            
             dp[i] = mini;
            
        }
        
        if(dp[amount]>=INT_MAX)return -1;
        
        
        return dp[amount];
        
    }
};