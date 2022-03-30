class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,k,m,n,t;
        bool ans=false;
        bool no =false;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                {
                    ans=true;
                    break;
                }
                else if(matrix[i][j]>target)
                {
                  n=true;
                    break;
                }
            }
            if(ans==true || no==true)
                break;
        }
        return ans;
        
    }
};