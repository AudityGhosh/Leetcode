class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b){
            if(a[1] == b[1]) return a[0] > b[0];
            return a[1] > b[1];
        });
        
        int ans=0,i;
        
        for(i=0;i<boxTypes.size();i++)
        {
            
            if(boxTypes[i][0]<=truckSize)
            {
             ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else
            {
                
                ans+=truckSize*boxTypes[i][1];
                truckSize=0;
            }
            if(truckSize==0)
                break;
            //cout<<truckSize<<" "<<ans<<endl;
        }
        
        return ans;
        
        
        
    }
};