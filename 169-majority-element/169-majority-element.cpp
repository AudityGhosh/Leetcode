class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>occ;
        int i,j,k,m,n,t;
        for(i=0;i<nums.size();i++) occ[nums[i]]++;
        
        int ans=-1;
        for(auto it:occ)
        {
            if(it.second>(nums.size()/2))
            {
                ans=it.first;
                break;
            }
        }
        
        return ans;
        
    }
};