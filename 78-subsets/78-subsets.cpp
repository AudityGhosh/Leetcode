class Solution {
public:
   
 
    vector<vector<int>> subsets(vector<int>& nums) {
        unsigned int pow_size = pow(2, nums.size());
    int counter, j;
        vector<vector<int>>ans;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_size; counter++)
    {
        vector<int>temp;
    for(j = 0; j <nums.size(); j++)
    {
      
        if(counter & (1 << j))
            temp.push_back(nums[j]);
    }
    ans.push_back(temp);
    }
       return ans; 
    }
};