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
    
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int> > res = subsets(nums);
        
        int ans=0;

    // Print the generated subsets
    for (int i = 0; i < res.size(); i++) {
        int x_or = 0;
        
        for (int j = 0; j < res[i].size(); j++){
            x_or = x_or^res[i][j];
            cout << res[i][j] << " ";}
        ans+=x_or;
        cout << endl;
    }
        
        
        return ans;
        
    }
    
};