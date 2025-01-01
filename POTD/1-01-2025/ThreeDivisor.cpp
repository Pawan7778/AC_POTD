// https://leetcode.com/problems/three-divisors/description/

class Solution
{
public:
    bool isThree(int n)
    {
        int count = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if (count == 2)
            {
                return false;
            }
        }
        if (count == 1)
        {
            return true;
        }
        return false;
    }
};