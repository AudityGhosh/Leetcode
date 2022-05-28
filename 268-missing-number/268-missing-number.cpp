class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),i,ans;
        for(i=0;i<nums.size();i++)
        {
            if(i!=nums[i])
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};