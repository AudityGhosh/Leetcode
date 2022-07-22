class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
vector<int> ans;
int n = arr.size();
for (int i = 0; i < n; i++) {
    auto it
        = lower_bound(ans.begin(), ans.end(), arr[i]);
    if (it == ans.end()) {
        ans.push_back(arr[i]);
        //cout<<arr[i]<<endl;
    }
    else {
        *it = arr[i];
    }
}
return ans.size();
        
    }
};
/* helpful to understand the intution:
https://www.geeksforgeeks.org/c-program-for-longest-increasing-subsequence -> method 2
in detail intution: https://www.youtube.com/watch?v=on2hvxBXJH4
*/