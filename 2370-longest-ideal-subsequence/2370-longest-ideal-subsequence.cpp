class Solution {
public:
    int longestIdealString(string s, int k) {
        
        int i,j;
        
        
        vector<int>storage; //map with alphabet and their power in subsequence

    for(i=0;i<26;i++)
    {
        storage.push_back(0); //reset all alphabet's power to zero
    }

    //for(auto it:storage)        cout<<it.first<<" "<<it.second<<endl;


    for(i=s.size()-1;i>=0;i--)
        {


         int maxi = 0;

         int current_index = s[i]-'a';


         for(j=current_index-k;j<=current_index+k;j++)
         {
             if(j>=0 && j<26)
                maxi = max(storage[j],maxi);

              }

         storage[current_index]=maxi+1;
        }


        return (*max_element(storage.begin(), storage.end()));


        
    }
};