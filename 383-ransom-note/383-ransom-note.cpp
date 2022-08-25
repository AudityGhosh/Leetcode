class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<int,int>occ_mag;
        int i,j,k,m,n,t;
        
        for(i=0;i<magazine.size();i++)
            occ_mag[magazine[i]]++;
        
        
        map<int,int>occ_ran;
        
        for(i=0;i<ransomNote.size();i++)
            occ_ran[ransomNote[i]]++;
       
        bool ans=true;
        
        for(auto it:occ_ran)
        {
            if(it.second<= occ_mag[it.first])
            {
                continue;
            }
            else
            {
                ans=false;
                break;
            }
        }
        
        return ans;
        
        
        
    }
};