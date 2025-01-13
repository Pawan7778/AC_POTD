// https://leetcode.com/problems/koko-eating-bananas/
class Solution
{
public:
    long long check(vector<int> &piles, int k)
    {
        long long res = 0;
        for (auto pile : piles)
        {
            res += (pile + (k - 1)) / k;
        }
        return res;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            long long val = check(piles, mid);

            if (val > h)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return lo;
    }
};