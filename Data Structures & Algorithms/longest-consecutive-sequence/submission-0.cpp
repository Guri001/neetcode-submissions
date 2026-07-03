class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        for(auto &it:nums) st.insert(it);
        int len = 0;
        for(auto &it:nums) {
           int cur = 0;
           if(st.count(it - 1)) continue;
           int num = it;
           while(st.count(num)) {
            cur++;
            num++;
           }
           len = max(len , cur);
        }
        return len;
    }
};
