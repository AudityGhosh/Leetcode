class Solution {
public:
    string reverseVowels(string s) {
        vector<int>v_ind;
        vector<char>v;
        int i,j,k,m,n,t;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v_ind.push_back(i);
                v.push_back(s[i]);
            }
        }
        reverse(v.begin(),v.end());
        string ans = s;
        for(i=0;i<v_ind.size();i++)
        {
            ans[v_ind[i]]=v[i];
        }
        return ans;
        
        
    }
};