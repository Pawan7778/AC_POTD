// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/
class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        bool bwins = false;
        bool awins = true;
        int n = colors.length();
        if (n < 3)
        {
            return bwins;
        }
        int i = 0;
        int j = 1;
        int k = 2;
        int a = 0;
        int b = 0;
        while (k < n)
        {
            if (colors[i] == colors[j] && colors[j] == colors[k] &&
                colors[k] == 'A')
            {
                a++;
            }
            else if (colors[i] == colors[j] && colors[j] == colors[k] &&
                     colors[k] == 'B')
            {
                b++;
            }
            i++;
            j++;
            k++;
        }
        if (a == b)
        {
            return bwins;
        }
        else if (a > b)
        {
            return awins;
        }
        return bwins;
    }
};