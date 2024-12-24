// https://leetcode.com/problems/assign-cookies/

#include <bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    int res = 0;
    int i = 0;
    int j = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            res++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return res;
}
int main()
{
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    cout << findContentChildren(g, s);
    return 0;
}