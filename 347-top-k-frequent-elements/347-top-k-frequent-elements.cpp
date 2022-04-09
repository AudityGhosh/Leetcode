class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        int i,j,m,n,t;
        for(i=0;i<nums.size();i++) freq[nums[i]]++;
        vector<pair<int,int>>occ;
        for(auto it:freq) occ.push_back(make_pair(it.second,it.first));
        sort(occ.rbegin(),occ.rend());
        vector<int>ans;
        t=0;
        for(auto it:occ)
        {
          if(t==k)
              break;
            else
            {
                ans.push_back(it.second);
                t++;
                
            }
        }
        return ans;
    }
};