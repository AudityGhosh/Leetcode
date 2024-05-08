class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
       map<int,string>score_pos;
        
        int i,j,k,m,n,t;
        
        for(i=0;i<score.size();i++)
        {
            score_pos[score[i]]="0";
        }
        
        map<int,string>score_real_pos;
        
        t = score.size();
        
        for(auto it:score_pos)
        {
            string s = to_string(t);
            if(s=="1") score_real_pos[it.first] = "Gold Medal";
            else if(s=="2") score_real_pos[it.first] = "Silver Medal";
            else if(s=="3") score_real_pos[it.first] = "Bronze Medal";
            else score_real_pos[it.first] = s;
            t=t-1;        
                  
            
            
        }
        
        for(auto it:score_real_pos)
            cout<<it.first<<" "<<it.second<<endl;
        
       
        
        
        vector<string>ans(score.size(),"0");
        
        for(i=0;i<score.size();i++)
            ans[i] = score_real_pos[score[i]];
        
        
        return ans;
        
        
    }
};