class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        
        int i,j,k,m,n,t;
        
        int ans=0;
        
        for(i=0;i<seats.size();i++)
        {
            ans+=abs(seats[i]-students[i]);
        }
        
        return ans;
        
    }
};