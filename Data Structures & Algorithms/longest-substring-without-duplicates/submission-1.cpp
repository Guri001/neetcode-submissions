class Solution {
public:
  
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char>st;
        int ans = 0;
        int i=0,j=0;
        while(j < n) {
            while(st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            }
           st.insert(s[j]);
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
