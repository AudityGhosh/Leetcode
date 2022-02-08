class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>s_oc;
        map<char,int>t_oc;
        int i,j,k,m,n;
        for(i=0;i<s.size();i++) s_oc[s[i]]++;
        for(i=0;i<t.size();i++) t_oc[t[i]]++;
        char ans;
        
        for(auto it:t_oc)
        {
            if(s_oc[it.first]!=it.second)
            {
                ans=it.first;
                break;
            }
        }
        
        return ans;
        /**A    U   D   I   T   Y       G   H   O   S   H**/
        
    }
};