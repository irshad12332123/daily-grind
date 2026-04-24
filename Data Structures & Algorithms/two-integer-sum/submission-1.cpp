class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int v = nums[i];
            int comp = target - v;
            if (mp.count(comp)) {
                return { mp[comp], i };
            }

            mp[v] = i;
        }
        return {0,0};
    }
};
