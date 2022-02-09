class Solution {
public:
    int findPairs(vector<int>& v, int k) {
        int cnt=0;
        int i,j,m,n,t;
        map<int,int>occ;
        for(i=0;i<v.size();i++) occ[v[i]]++;
        
        for(auto x:occ)
        {
            if(k==0)
            {    
                if(x.second>1)
                cnt++;
            }
             else if(occ.find(x.first+k)!=occ.end())
                cnt++;
        }
        
        return cnt;
        
        
        
    }
};