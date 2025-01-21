// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0;
        int j = 0;
        int n = s.length();
        int maxlen = 0;
        unordered_map<char, int> mp;
        while (j < n)
        {
            mp[s[j]]++;
            while (mp[s[j]] > 1)
            {
                mp[s[i]]--;
                i++;
            }
            maxlen = max(j - i + 1, maxlen);
            j++;
        }
        return maxlen;
    }
};