class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i,j,k,m,n,t;
        vector<int>temp;
        for(auto it:nums) temp.push_back(it);
        sort(temp.begin(),temp.end());
       // for(auto it:temp) cout<<it<<" ";cout<<endl;
        
        int sub_start = -1, sub_end=-1;
        
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=temp[i])
            {
                sub_start=i;
                break;
            }
        }
        
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]!=temp[i])
            {
                sub_end=i;
                break;
            }
        }
        
       // cout<<sub_start<<" "<<sub_end<<endl;
        if(sub_end==-1 && sub_start==-1) return 0;
        else return sub_end-sub_start+1;
    }
};