class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int n = nums.size();
          vector<int>suf(n,1);
          suf[n - 1] = nums[n - 1];
          for(int i=n-2;i>=0;i--){
               suf[i] = suf[i + 1] * nums[i];
          }
          long long pref = 1;
          vector<int>ans;
          for(int i=0;i<n;i++){
            long long val = pref * (i < n - 1 ? suf[i + 1] : 1);
            ans.push_back(val);
            pref *= nums[i];

          }
          return ans;
    }
};
