class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>nums_freq;
        int i,j,k,m,n,t;
        
        for(i=0;i<nums.size();i++)
        {
            nums_freq[nums[i]]++;
        }
        
        int ans=-1;
        
        
        
        //for(auto it:nums_freq)            cout<<it.first<<" "<<it.second<<endl;
        
        for(auto it:nums_freq)
        {
            if(it.first<0 && nums_freq[-1*it.first]>0)
            {
                ans = -1*it.first;
                break;
            }
        }
        
        
        
        return ans;
        
        
        
    }
};