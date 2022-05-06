class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        vector<pair<char,int>>oc; //pair(element,freq)
        
        for(char c:s)
        {
            //if no other char in the vector. Latest element is not c
            if(oc.empty() || oc.back().first!=c) oc.push_back({c,1});
            else
            {
                oc.back().second++; //Latest element is c, increment freq
                
                if(oc.back().second==k) //Latest element's freq is k, so remove the element
                {
                    oc.pop_back();
                }
            }
            
        }
        
        string ans="";
        
        for(auto it:oc)
        {
            //string.append(n,c): repeat char c n times
            ans.append(it.second,it.first);
        }
        
        return ans;
        
        
        
        
        
    }
};