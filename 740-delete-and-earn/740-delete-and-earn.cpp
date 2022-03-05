class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> occ(100001, 0);
		vector<int> dp(100001, 0);
        int i,j,k,m,n,t;

		for (auto it : nums) 
            occ[it]++;
        
		dp[1] = occ[1];

		for (i=2; i<100001; i++)
            dp[i] = max( dp[i-2]+ i * occ[i], dp[i-1]);

		return dp[100000];
        
    }
};