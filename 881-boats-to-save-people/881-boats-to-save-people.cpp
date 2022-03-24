class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i,j,k,m,n,t;
        int cnt=0;
        sort(people.begin(),people.end());
        i=0,j=people.size()-1;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            {
                i++;
                j--;
            }
            else
                j--;
            cnt++;
        }
        return cnt;
        
    }
};