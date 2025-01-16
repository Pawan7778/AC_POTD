// https://leetcode.com/problems/string-compression/description/
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        if (n == 1)
        {
            return 1;
        }

        int j = 0;
        int count = 1;

        for (int i = 1; i <= n; i++)
        {
            if (i < n && chars[i] == chars[i - 1])
            {
                count++;
            }
            else
            {
                chars[j++] = chars[i - 1];

                if (count > 1)
                {
                    string digits = to_string(count);
                    for (char digit : digits)
                    {
                        chars[j++] = digit;
                    }
                }

                count = 1;
            }
        }

        return j;
    }
};