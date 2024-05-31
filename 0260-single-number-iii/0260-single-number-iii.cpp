class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>freq;
        int i,j,k,m,n,t;
        
        vector<int>ans;
        
        for(i=0;i<nums.size();i++) freq[nums[i]]++;
        
        for(auto it:freq)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};