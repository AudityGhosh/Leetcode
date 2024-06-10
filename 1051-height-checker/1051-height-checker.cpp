class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int>exp;
        exp = heights;
        sort(exp.begin(),exp.end());
        
        int i,j,k,m,n,t;
        int cnt=0;
        
        for(i=0;i<exp.size();i++)
        {
            if(exp[i]!=heights[i])
                cnt++;
        }
        return cnt;
    }
};