// https://leetcode.com/problems/count-number-of-nice-subarrays/
class Solution
{
public:
    int calculate(vector<int> &nums, int goal)
    {
        if (goal < 0)
            return 0;
        int n = nums.size();
        int count = 0;
        int l = 0;
        int sum = 0;
        int r = 0;
        while (r < n)
        {
            sum += nums[r];
            while (sum > goal)
            {
                sum -= nums[l];
                l++;
            }
            count = count + (r - l + 1);
            r++;
        }

        return count;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {

        return calculate(nums, goal) - calculate(nums, goal - 1);
    }
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[i] = 0;
            }
            else
            {
                nums[i] = 1;
            }
        }
        return numSubarraysWithSum(nums, k);
    }
};