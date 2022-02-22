class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(),columnTitle.end());
        int i,j,k,m,n,t;
        int ans=0;
        for(i=0;i<columnTitle.size();i++)
        {
            ans+=((columnTitle[i]-'A'+1)*pow(26,i));
        }
        return ans;
        
    }
};