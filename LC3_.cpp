class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> chars(128,0);

        int i = 0;
        int j = 0;

        int ans = 0;
        while (j < s.length()) {
            char r = s[j];
            chars[r]++;

            while (chars[r] > 1) {
                char l = s[i];
                chars[l]--;
                i++;
            }

            ans = max(ans, j - i + 1);

            j++;
        }

        return ans;
    }
};
