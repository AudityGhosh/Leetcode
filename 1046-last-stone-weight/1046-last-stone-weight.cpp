class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int i,j,k,m,n,t;
        for(i=0;i<stones.size();i++) pq.push(stones[i]);
        
        
        
        while(pq.size()>=2)
        {
            int y = pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x==y)
                continue;
            else
              pq.push(y-x);
                
        }
        
        if(pq.size()==2) pq.pop();
        
        if(pq.size()==1)
            return pq.top();
        else
            return 0;
        
        
    }
};