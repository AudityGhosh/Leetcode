class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i,j,k,m,n,t;
        n= s1.size();
        if(s2.size()<s1.size())
            return false;
        map<char,int>oc_1;
        for(i=0;i<s1.size();i++) oc_1[s1[i]]++;
        for(i=0;i<=s2.size()-n;i++)
        {
            string temp = s2.substr(i,n);
            map<char,int>oc_2;
            for(j=0;j<temp.size();j++)
            {
                oc_2[temp[j]]++;
                
            }
            if(oc_1==oc_2)
                return true;
            
        }
        return false;
        
        
    }
};