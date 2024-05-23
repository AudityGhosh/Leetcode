class Solution {
public:
    void calcSubset(vector<int>& A, vector<vector<int> >& res,
                vector<int>& subset, int index)
{
    // Add the current subset to the result list
    res.push_back(subset);

    // Generate subsets by recursively including and
    // excluding elements
    for (int i = index; i < A.size(); i++) {
        // Include the current element in the subset
        subset.push_back(A[i]);

        // Recursively generate subsets with the current
        // element included
        calcSubset(A, res, subset, i + 1);

        // Exclude the current element from the subset
        // (backtracking)
        subset.pop_back();
    }
}

vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> subset;
    vector<vector<int> > res;
    int index = 0;
    calcSubset(A, res, subset, index);
    return res;
}

    int beautifulSubsets(vector<int>& nums, int k) {
        vector<vector<int> > res = subsets(nums);

   
        
        int ans=nums.size();
        
        int i,j,m,n,t;
        
        for(i=0;i<res.size();i++)
        {
            if(res[i].size()>1)
            {
                bool beu = true;
                
                
                for(j=0;j<res[i].size();j++)
                {
                    for(m=j+1;m<res[i].size();m++)
                    {
                        if(abs(res[i][m]-res[i][j])==k)
                        {
                            beu=false;
                            break;
                        }
                    }
                   if(beu==false)
                       break;
                }
                
                
                
                
                
                if(beu)
                    ans++;
                    
            }
        }
        
        
        
        return ans;
        
    }
};