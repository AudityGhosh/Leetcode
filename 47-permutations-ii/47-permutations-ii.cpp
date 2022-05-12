class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //if we sort it the first permutation will be smallest, and we will collect all permutations using next permutation on that. And yes, next permutation works on array as well.
        vector<vector<int>>ans;
        do {
       ans.push_back(nums);
    } while (next_permutation(nums.begin(),nums.end()));
        
        return ans;
        
    }
};