class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int>ans;
        map<int,int>freq_v1;
        
        
        int i,j,k,m,n,t;
        
        
        for(i=0;i<arr1.size();i++) freq_v1[arr1[i]]++;
        
        vector<int>extra_v1;
        
        for(i=0;i<arr2.size();i++)
        {
            int cur_val = arr2[i];
            if(freq_v1[cur_val]>0)
            {
                for(j=0;j<freq_v1[cur_val];j++)
                    ans.push_back(cur_val);               
                
            }
           
        }
        
        map<int,int>freq_ans;
        
        for(i=0;i<ans.size();i++) freq_ans[ans[i]]++;
        
        for(auto it:freq_v1)
        {
            int cur_val = it.first;
            if(freq_ans[cur_val]==0)
            {
                for(j=0;j<it.second;j++)
                    ans.push_back(it.first);
            }
        }
       
        
        
        
        for(auto it:ans)
            cout<<it<<" "; cout<<endl;
        
        return ans;
        
        
        
    }
};