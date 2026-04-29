class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> ans;
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<pair<int, int>> temp;

        for(auto& p: mp){
           temp.push_back({p.second, p.first});
        }

        sort(temp.begin(), temp.end(),greater<pair<int, int>>());

        for(int i = 0; i < k; i++){
            ans.push_back(temp[i].second);
        }
       
        return ans;
    }
};
