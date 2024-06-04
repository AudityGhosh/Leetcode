class Solution {
public:
    int longestPalindrome(string s) {
        int i,j,k,m,n,t;
        
        map<char,int>freq;
        
        for(i=0;i<s.size();i++)
        {
            freq[s[i]]++;

        }
        
        int ans=0;
        
        int jora_jora = 0;
        int ekta_paisi = false;
        
        for(auto it:freq)
        {
            if(it.second%2==0)
            {
                jora_jora+=it.second;
                freq[it.first]=0;
            }
            else
            {
                jora_jora += (it.second-1);
                freq[it.first]=1;
                if(ekta_paisi==false)
                {
                    jora_jora++;
                    ekta_paisi= true;
                }
                
            }
        }
        
        
        
        for(auto it:freq)
            cout<<it.first<<" "<<it.second<<endl;
        
       /* for(auto it:freq)
        {
            if(it.second==1)
            {
                jora_jora++;
                break;
            }
        }*/
        
        ans=jora_jora;
        
        return ans;
        
        /* A    U   D   I   T   Y*/
            
        
    }
};