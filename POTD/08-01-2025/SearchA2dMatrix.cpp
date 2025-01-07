// https://leetcode.com/problems/search-a-2d-matrix/
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
        int n = mat.size();
        int m = mat[0].size();
        int lo = 0;
        int hi = n - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (x >= mat[mid][0] && x <= mat[mid][m - 1])
            {
                return binarySearch(mat[mid], x);
            }
            else if (x < mat[mid][0])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return false;
    }
};