class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>oc_s;
        map<char,int>oc_t;
        int i,j,k,m,n;
        for(i=0;i<s.size();i++) oc_s[s[i]]++;
        for(i=0;i<t.size();i++) oc_t[t[i]]++;
        return oc_s==oc_t;
        
    }
};