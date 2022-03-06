class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>occ;
        int i,j,k,m,n,t;
        for(i=0;i<s.size();i++)
        {
            occ[s[i]]++;
        }
        for(i=0;i<s.size();i++)
        {
            if(occ[s[i]]==1)
              return i;
        }
        return -1;
        
    }
};