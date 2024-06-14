class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        int i,j,k,m,n,t;
        
        
        int ans=0;
        
        sort(nums.begin(),nums.end());
        
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums[i]++;
                ans++;
            }
            else if(nums[i]<nums[i-1])
            {
                int init = nums[i];
                int finit = nums[i-1]+1;
                
                nums[i] = finit;
                ans+=(finit-init);
            }
        }
        
        
        
        return ans;
        
        
        
        
    }
};