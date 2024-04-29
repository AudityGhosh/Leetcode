class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int i,j,m,n,t;
        
        int all_xor = 0;
        
        for(i=0;i<nums.size();i++)
            all_xor = all_xor ^ nums[i]; // xor of all int
        
        
        return __builtin_popcount(all_xor ^ k); // number of mismtached bits is the number of 1 in xor of both == no of min flips to make them equal 
        
    }
};