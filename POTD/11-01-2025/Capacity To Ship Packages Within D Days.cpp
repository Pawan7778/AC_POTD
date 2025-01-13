// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
class Solution
{
public:
    bool isfeasible(vector<int> &arr, int days, int mid)
    {
        int day = 1;
        int res = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (res + arr[i] > mid)
            {
                day++;
                res = arr[i];
            }
            else
            {
                res += arr[i];
            }
        }
        return day <= days;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int lo = 0;
        int hi = 0;
        for (int weight : weights)
        {
            lo = max(lo, weight);
            hi += weight;
        }
        int res = 0;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (isfeasible(weights, days, mid))
            {
                res = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return res;
    }
};