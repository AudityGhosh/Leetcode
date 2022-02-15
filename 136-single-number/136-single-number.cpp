class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>occ;
        for(int i=0;i<nums.size();i++) occ[nums[i]]++;
        int ans=-1;
        for(auto it:occ)
        {
            if(it.second==1) {
                ans = it.first;
                break;
            }
        }
        return ans;
        
    }
};