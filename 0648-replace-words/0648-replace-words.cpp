class Solution {
public:
    bool isPrefix(std::string_view prefix, std::string_view full)
{
    return prefix == full.substr(0, prefix.size());
}
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        
        
        string ans = "";
        
       int i,j,k,m,n,t;
        
        map<int,vector<string>>len_freq;
        for(i=0;i<dictionary.size();i++)
        {
            len_freq[dictionary[i].size()].push_back(dictionary[i]);
        }
        vector<string>sorted_dict;
        
        for(auto it:len_freq)
        {
            vector v = it.second;
            sorted_dict.insert(sorted_dict.end(), v.begin(), v.end());
        }
        
        
        
        
        istringstream ss(sentence);
        string word;
        
        while (ss >> word) 
    {
            bool prefix_paisi = false;
        
        for(i=0;i<sorted_dict.size();i++)
        {
            if(isPrefix(sorted_dict[i],word))
            {
                if(ans=="")
                {
                    ans+=sorted_dict[i];
                    prefix_paisi = true;
                    break;
                }
                else
                {
                    ans+=" ";
                    ans+=sorted_dict[i];
                     prefix_paisi = true;
                    break;
                }
            }
        }
            if(prefix_paisi ==false)
            {
                if(ans=="")
                {
                    ans+=word;
                    
                }
                else
                {
                    ans+=" ";
                    ans+=word;
                     
                }
                
            }
    }
        
        
        
        
        
        
        
        
        return ans;
        
    }
};