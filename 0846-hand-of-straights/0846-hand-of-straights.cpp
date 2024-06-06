class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int i,j,k,m,n,t;
        
        if(hand.size()%groupSize)
            return false;
        else
        {
            
            
            map<int,int>freq;
            
            for(i=0;i<hand.size();i++)
            {
                freq[hand[i]]++;
            }
            
            // get the smallest card every time, if there is consecutive cards present to make a group of groupSize then okay, else return false; As you have made a group, decrease the cards' frequencies, if the frequency becomes less than 0, discard the card from the freq map. 
            
            while(!freq.empty())
            {
                int f_m = freq.begin()->first;
                
                for(i=0;i<groupSize;i++)
                {
                    if(freq[f_m+i]==0)
                        return false;
                    
                    freq[f_m+i]--;
                    if(freq[f_m+i]<1)
                        freq.erase(f_m+i);
                }
            }
            
            
            
      
            
            
            
            return true;
        }
        
    }
};