class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto &it:nums) mp[it]++;
        for(auto &it:mp) pq.push({it.second,it.first});
       vector<int>ans;
       while(k--){
        auto [frq,el] = pq.top();
        pq.pop();
         ans.push_back(el);
       }
       return ans;
    }
};
