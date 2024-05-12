class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int i,j,k,m,n,t;
        
        vector<vector<int>> ans( grid.size()-2 , vector<int> (grid.size()-2));  
        
      
        
        for(i=0;i<grid.size()-2;i++)
        {
            for(j=0;j<grid.size()-2;j++)
            {
                cout<<i<<" "<<j<<" "<<endl;
                cout<<"**********"<<endl;
                int maxi = -1;
                maxi = max(maxi,grid[i][j]);
                maxi = max(maxi,grid[i+1][j]);
                maxi = max(maxi,grid[i+2][j]);
                
                maxi = max(maxi,grid[i][j+1]);
                maxi = max(maxi,grid[i+1][j+1]);
                maxi = max(maxi,grid[i+2][j+1]);
                
                
                maxi = max(maxi,grid[i][j+2]);
                maxi = max(maxi,grid[i+1][j+2]);
                maxi = max(maxi,grid[i+2][j+2]);
                
                
                ans[i][j] = maxi;
                
                
                
            }
            cout<<endl;
          
        }
        
          return ans;
        
        
    }
};