class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        vector<int>jobs;
        
        int maxAbility = *max_element(begin(worker), end(worker)); 
        jobs.assign(maxAbility+1,0);
        
        int ans=0,i,j,k,m,n,t;
        
      
        
        
        
        for(i=0;i<difficulty.size();i++)
        {
             if (difficulty[i] <= maxAbility)
            jobs[difficulty[i]] = max(jobs[difficulty[i]],profit[i]);
        }
        
        for(i=1;i<jobs.size();i++)
            jobs[i] = max(jobs[i],jobs[i-1]);
        
        
        for(i=0;i<worker.size();i++)
            ans+=jobs[worker[i]];
        
        
        
        
        return ans;
    }
};