// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
class Solution
{
public:
    bool search(vector<int> &nums, int key)
    {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == key)
            {
                return true;
            }
            if (nums[mid] == nums[lo] && nums[mid] == nums[hi])
            {
                lo++;
                hi--;
            }
            else if (nums[lo] <= nums[mid])
            {
                if (key >= nums[lo] && key <= nums[mid])
                {
                    hi = mid - 1;
                }
                else
                {
                    lo = mid + 1;
                }
            }
            else
            {
                if (key <= nums[hi] && key >= nums[mid])
                {
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }
        }
        return false;
    }
};