class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i,j,k,m,n,low,high;
        vector<string>ans;
        string temp="";
        for(i=0;i<nums.size();i++)
        {
            j=i;
            temp=to_string(nums[i]);
            while(i+1 < nums.size() &&nums[i]==nums[i+1]-1) ++i;
                
            if(i!=j)
            {
                temp+="->";
                temp+=to_string(nums[i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};