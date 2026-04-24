class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        unordered_map<string, bool> isGrouped;
        for (int i = 0; i < n; i++) {
            string word1 = strs[i];
            if (isGrouped[word1]) continue;
            vector<string> group;
            for (int j = 0; j < n; j++) {
                string word2 = strs[j];
                if (word1.length() != word2.length() or i == j) continue;
                // sort them out
                string sorrtedW1 = word1;
                string sorrtedW2 = word2;
                sort(sorrtedW1.begin(), sorrtedW1.end());
                sort(sorrtedW2.begin(), sorrtedW2.end());
                if (sorrtedW1 == sorrtedW2) {
                    isGrouped[word2] = true;
                    group.push_back(word2);
                }
            }
            isGrouped[word1] = true;
            group.push_back(word1);
            ans.push_back(group);
        }

        return ans;
    }
};
