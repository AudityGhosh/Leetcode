class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>occ;
        int i,j,k,m,n,t;
        for(i=0;i<nums.size();i++) occ[nums[i]]++;
        int ans=0;
        for(auto it:occ)
        {
            if(it.second!=1)
            {
                ans=it.first;
                break;
            }
        }
        return ans;
        
    }
};