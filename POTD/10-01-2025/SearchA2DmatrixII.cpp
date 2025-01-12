// https://leetcode.com/problems/search-a-2d-matrix-ii/description/
class Solution
{
public:
    bool binarySearch(vector<int> &nums, int key)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == key)
            {
                return true;
            }
            else if (key > nums[mid])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int x)
    {
        // code here
        for (vector<int> &nums : mat)
        {
            if (binarySearch(nums, x))
            {
                return true;
            }
        }
        return false;
    }
};