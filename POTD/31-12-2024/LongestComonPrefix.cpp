// https://leetcode.com/problems/longest-common-prefix/description/
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 1)
    {
        return strs[0];
    }
    string res = "";
    int j = 0;
    int s1 = strs[0].length();
    int s2 = strs[1].length();
    if (s1 == 0 || s2 == 0)
    {
        return res;
    }
    while (j < s1 && j < s2)
    {
        if (strs[0][j] == strs[1][j])
        {

            res += strs[0][j];
        }
        else
        {
            break;
        }
        ++j;
    }
    for (int i = 2; i < strs.size(); i++)
    {
        for (int k = 0; k < j; k++)
        {
            if (res[k] != strs[i][k])
            {
                j = k;
                break;
            }
        }
        if (j == 0)
        {
            return "";
        }
    }
    string s = "";
    for (int c = 0; c < j; c++)
    {
        s += res[c];
    }
    return s;
}
int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(str);
    return 0;
}