class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>occ;
        int i,j,k,m,n,t;
        for(i=0;i<nums.size();i++) occ[nums[i]]++;
        bool ans=false;
        for(auto it:occ)
        {
            if(it.second>1)
            {
                ans=true;
                break;
            }
        }
        return ans;
        
    }
};