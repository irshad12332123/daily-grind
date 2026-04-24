class Solution {
   public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if (n != m) return false;

        unordered_map<int, int> hash1;
        unordered_map<int, int> hash2;

        for (char ch : s) hash1[ch]++;

        for (char ch : t) hash2[ch]++;

        for (char ch : s) {
            if (hash1[ch] != hash2[ch]) return false;
        }

        return true;
    }
};
