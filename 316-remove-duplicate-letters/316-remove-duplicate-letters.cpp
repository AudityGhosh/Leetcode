class Solution {
public:
    string removeDuplicateLetters(string s) {
       unordered_map<char,int>cnt;
        unordered_map<char,bool>used;
        string ans;
        for(auto ch : s) cnt[ch]++;
        for(auto ch : s){
            cnt[ch]--;
            if(used[ch]) continue;
            while(!ans.empty() && ans.back() > ch && cnt[ans.back()] > 0){
                used[ans.back()] = false;
                ans.pop_back();
            }
            used[ch] = true;
           ans += ch;
        }
        return ans;
        
    }
};