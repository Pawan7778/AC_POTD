// https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/?envType=problem-list-v2&envId=greedy
class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> row(n, 0);
        vector<int> col(n, 0);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                res += min(row[i], col[j]) - grid[i][j];
            }
        }
        return res;
    }
};