// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/

class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int n = boxes.length();
        if (n == 1)
        {

            return {0};
        }
        vector<int> ans;
        vector<int> ones;
        for (int i = 0; i < n; i++)
        {
            if (boxes[i] == '1')
            {
                ones.push_back(i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (auto j : ones)
            {
                sum += abs(j - i);
            }

            ans.push_back(sum);
        }
        return ans;
    }
};