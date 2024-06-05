class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int i,j,k,m,n,t;
        
        vector<vector<int>>freq(26);
        
        for(i=0;i<words.size();i++)
        {
            map<char,int>occ;
            for(j=0;j<words[i].size();j++)
            {
               occ[words[i][j]]++; 
            }
            for(auto it:occ)
            {
                int ind = it.first-'a';
                freq[ind].push_back(it.second);
            }
        }
        
        vector<string>ans;
        
        for(i=0;i<freq.size();i++)
        {
            if(freq[i].size()==words.size())
            {
                int occ_char = *min_element(freq[i].begin(), freq[i].end());
                for(k=0;k<occ_char;k++)
                    ans.push_back(string(1,char('a'+i)));
            }
        }
        
        
        
        return ans;
        
        
        
    }
};