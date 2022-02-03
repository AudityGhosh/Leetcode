class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int i,j,k,m,n,t;
        int cnt=0;
        map<int,int>mp;
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                mp[nums1[i]+nums2[j]]++;
            }
        }
        for(i=0;i<nums3.size();i++)
        {
            for(j=0;j<nums4.size();j++)
            {
                cnt+=mp[-nums3[i]-nums4[j]];
            }
        }
        
        
        return cnt;
        
    }
};