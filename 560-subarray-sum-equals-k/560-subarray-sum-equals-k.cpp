class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> occ;
        
        int cnt=0,currsum=0,n=nums.size();
        
        for( auto it:nums)
        {
            currsum+=it;
            
           
            if(currsum==k) cnt++;          
           
            
            
            if(occ.count(currsum - k))
            {
                cnt+=occ[currsum-k];
            }
            
            occ[currsum]++;
        }
        
        return cnt;
        
        
    }
};