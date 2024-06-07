class Solution {
public:
    
    //function to check if the first string is a prefix of the second string
    bool isPrefix(std::string_view prefix, std::string_view full)
{
    return prefix == full.substr(0, prefix.size());
}
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        
        
        string ans = "";
        
       int i,j,k,m,n,t;
        
        //normally if you sort the vector of strings, it will sort it dictionary wise, but we don't want that, as if multiple prefixes from the dictionary match with the sentence's word, we only need to choose the one with shorter length. So I used map, length as key and value will be the vector of strings with that length. As a result those strings will be sorted alphabetically by themselves. I just need to copy all strings to another vector to iterate easily. 
        
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
        
        
  // as the sentence contains spaces, stringstream will help us to choose word one by one. We will iterate over the sorted dictionary to get the first prefix of each word. If we get the prefix, that's okay, append it with answer string. Else, place it as it is. Beware of no spacing before first word in the answer sentence.       
        
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