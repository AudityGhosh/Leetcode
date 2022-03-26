class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        if(it!=nums.end())
        {
         auto low = lower_bound(nums.begin(),nums.end(),target);
         int index = low-nums.begin();
            return index;
        }
        else
            return -1;
        
    }
};