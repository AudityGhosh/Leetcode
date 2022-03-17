class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,i,j,k,m,n,t;
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[i].size();j++)
            {
                if(i==j) sum+=mat[i][j]; //primary diagonal
                else
                {
                    if(i+j==mat.size()-1)
                        sum+=mat[i][j];   //secondary diagonal
                }
            }
        }
        return sum;
        
    }
};