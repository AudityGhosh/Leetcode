class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        string segment= "";
        string ans;
        
        int first_occur = -1;
        
        int i,j,k,m,n,t;
        
        
        
        for(i=0;i<word.size();i++)
        {
            
            if(word[i]==ch)
            {
                segment+=ch;
                first_occur = i;
                break;
            }
            else
                segment += word[i];
        }
        
        if(first_occur==-1)
            ans =word;
        else
        {
            reverse(segment.begin(),segment.end());
            ans = segment;
            
            for(i=first_occur+1;i<word.size();i++)
                ans+=word[i];
        }
        
        return ans;
            
        
        
        
        
        
    }
};