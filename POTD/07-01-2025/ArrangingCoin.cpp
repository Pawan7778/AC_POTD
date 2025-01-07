// https://leetcode.com/problems/arranging-coins/
class Solution
{
public:
    int arrangeCoins(int n)
    {
        int lo = 1;
        int hi = n;
        int res = 0;
        while (lo <= hi)
        {
            long mid = lo + (hi - lo) / 2;
            long sum = (mid * (mid + 1)) / 2;
            if (sum > n)
            {
                hi = mid - 1;
            }
            else if (sum <= n)
            {
                res = mid;
                lo = mid + 1;
            }
        }
        return res;
    }
};