class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i,j,k,m,n,t;
        int dest = nums.size()-1;
        for(i=nums.size()-2;i>=0;i--)
        {
         if(nums[i]+i >= dest)
         {
             dest = i;
         }
        }
        
        return dest<=0;
        
    }
};