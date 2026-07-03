class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mp;
        for(auto &it:strs) {
            string s = it;
            sort(s.begin(),s.end());
            mp[s].push_back(it);
        }
        for(auto &it:mp) {
            vector<string>vec;
            for(auto &itr:it.second) {
                 vec.push_back(itr);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
