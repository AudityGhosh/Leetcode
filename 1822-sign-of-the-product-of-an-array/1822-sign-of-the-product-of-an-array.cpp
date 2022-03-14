class Solution {
public:
    int arraySign(vector<int>& nums) {
        int zero=0,neg=0,pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) zero++;
            if(nums[i]<0) neg++;
            if(nums[i]>0) pos++;
        }
        if(zero>0)
            return 0;
        else
        {
            if(neg%2==0) return 1;
            else return -1;
        }
        
    }
};