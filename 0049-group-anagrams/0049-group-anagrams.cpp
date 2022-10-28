class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        /* here, the sorted strings of all anagrams will be the same. So I used a map to store the unsorted strings in a vector corresponding to that sorted string. */
        int i,j,k,m,n,t;
        map<string,vector<string>>sim_s;
        for(i=0;i<strs.size();i++)
        {
            string t = strs[i];
            sort(t.begin(),t.end());
            
            sim_s[t].push_back(strs[i]);
            
        }
        
        vector<vector<string>>ans;
        
        for(auto it:sim_s)
        {
            ans.push_back(it.second);
            
        }
        
        
        return ans;
        
        
        //AUDITY GHOSH
        
        
        
        
    }
};