// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        int res = 0;
        for (int num : nums)
        {
            res += freq[num - k] + freq[num + k];
            freq[num]++;
        }
        return res;
    }
};