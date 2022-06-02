class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j,k,m,n,t;
        m = matrix.size();
        n = matrix[0].size();
        
        vector<vector<int>>ans;
        for(i=0;i<n;i++)
        {
            vector<int>temp;
            for(j=0;j<m;j++)
            {
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};