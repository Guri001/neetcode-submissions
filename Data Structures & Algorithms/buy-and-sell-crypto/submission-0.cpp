class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int mini = p[0];
        int ans = 0;
        for(int i=1;i<n;i++){
            ans = max(ans,p[i] - mini);
            mini = min(mini,p[i]);
        }
        return ans;
    }
};
