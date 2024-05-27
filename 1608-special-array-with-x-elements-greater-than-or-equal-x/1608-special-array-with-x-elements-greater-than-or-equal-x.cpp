#include <bits/stdc++.h> 
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int i,j,k,m,n,t;
        
        int ans=-1;
        
        for(i=1;i<=nums.size();i++)
        {
            auto low = lower_bound(nums.begin(),nums.end(),i);
            
            if(low!=nums.end())
            {
                t = low-nums.begin();
                
                if(nums.size()-t==i)
                {
                    ans =i;
                    break;
                }
            }
            else
                continue;
        }
        
        
        return ans;
    }
};