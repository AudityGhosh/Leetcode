class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,c=0;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            nums[c]=nums[i];
            c++;
        }
    }
    for(i=c;i<nums.size();i++)
        nums[i]=0;
    }
};