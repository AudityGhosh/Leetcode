class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sums;
        int i,j,k,m,n,t;
        int sum=0;
        sums.push_back(nums[0]);
        sum+=nums[0];
        
        for(i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            sums.push_back(sum);
        }
        
        return sums;
    }
};