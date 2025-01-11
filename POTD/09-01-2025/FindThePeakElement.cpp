// https://leetcode.com/problems/find-peak-element/
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int lo = 0;
        int n = nums.size();
        int hi = n - 1;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if ((mid == 0 || nums[mid - 1] <= nums[mid]) &&
                (mid == n - 1 || nums[mid] >= nums[mid + 1]))
            {
                return mid;
            }
            if (mid > 0 && nums[mid] <= nums[mid - 1])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return -1;
    }
};