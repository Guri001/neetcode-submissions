class Solution {
public:
 
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n = nums.size();
         sort(nums.begin(),nums.end());
         vector<vector<int>>ans;
         for(int i=0;i<n;i++){
            if(i && nums[i] == nums[i - 1]) continue;
            int x = i + 1 , y = n - 1;
            while(x < y) {
                int sum = nums[i] + nums[x] + nums[y];
                if(sum == 0) {
                    ans.push_back({nums[i],nums[x],nums[y]});
                    while(x + 1 < y && nums[x] == nums[x + 1]) x++;
                    while(y - 1 > x && nums[y] == nums[y - 1]) y--;
                    x++;
                    y--;
                }
                else if(sum > 0) {
                    y--;
                }
                else x++;
            }
         }
         return ans;
    }
};
