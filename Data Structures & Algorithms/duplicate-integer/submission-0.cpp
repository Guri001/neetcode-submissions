class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(auto &it:nums) {
            if(mp.count(it)) return true;
            mp[it]++;
        }
        return false;
    }
};