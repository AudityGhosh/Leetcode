class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,j,k,m,n,t;
        
        bool ans=false;
        
        if(arr.size()>=3)
        {
            for(i=2;i<arr.size();i++)
            {
                if((arr[i]%2==1)&&(arr[i-1]%2==1)&&(arr[i-2]%2==1))
                {
                    ans=true;
                    break;
                }
            }
        }
        
        return ans;
        
    }
};