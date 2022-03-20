class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,k,m,n,t;
        int sum=0;
        for(i=0;i<accounts.size();i++)
        {
            int cur_sum=0;
            for(j=0;j<accounts[i].size();j++)
            {
                cur_sum+=accounts[i][j];
            }
            sum = max(sum,cur_sum);
        }
        return sum;
        
    }
};