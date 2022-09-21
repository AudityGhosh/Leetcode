class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int i,j,k,m,n,t;
        int even_sum=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) even_sum+=nums[i];
        }
        
        vector<int>ans;
        
        for(i=0;i<queries.size();i++)
        {
          int index = queries[i][1];
            int val = queries[i][0];
            
            int num = nums[index];
            
            if(num%2==0)
                even_sum-=num;
            
            nums[index]=nums[index]+val;
            
            if(nums[index]%2==0)
                even_sum+=(nums[index]);
            
            ans.push_back(even_sum);
            
            
            
        }
        
        return ans;
        
    }
};