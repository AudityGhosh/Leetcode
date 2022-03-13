class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
       vector<vector<int>>valids;
        int i,j,k,m,n,t;
        for(i=0;i<points.size();i++)
        {
            int x1 = points[i][0];
            int y1 = points[i][1];
            
           if(x1==x || y1==y) 
           {
               vector<int>temp;
               temp.push_back(i);
               temp.push_back(abs(x1-x)+abs(y1-y));
               
               valids.push_back(temp);
           }
            
        }
        //for(i=0;i<valids.size();i++) cout<<valids[i][0]<<" "<<valids[i][1]<<endl;
        int min_dist=INT_MAX,min_ind=-1;
        for(i=0;i<valids.size();i++)
        {
            if(valids[i][1]<min_dist)
            {
                //cout<<min_dist<<min_ind<<endl;
                min_dist = valids[i][1];
                min_ind=valids[i][0];
            }
        }
        
        return min_ind;
       
        
    }
};