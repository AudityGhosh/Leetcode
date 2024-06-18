class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        vector<pair<int, int>> jobProfile;
        for (int i = 0; i < difficulty.size(); i++) {
            jobProfile.push_back({difficulty[i], profit[i]});
        }

        // Sort both worker and jobProfile arrays
        sort(worker.begin(), worker.end());
        sort(jobProfile.begin(), jobProfile.end());

        int netProfit = 0, maxProfit = 0, index = 0;
        for (int i = 0; i < worker.size(); i++) {
            // While the index has not reached the end and worker can pick a job
            // with greater difficulty move ahead.
            // if there is not unique index of difficulty where 2 can be assigned for the first example, so the profit of 2 will be the profit of previous worker 
            while (index < difficulty.size() and
                   worker[i] >= jobProfile[index].first) {
                maxProfit = max(maxProfit, jobProfile[index].second);
                index++;
            }
            netProfit += maxProfit;
        }
        return netProfit;
    }
};