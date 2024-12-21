// link - https://leetcode.com/problems/score-of-a-string/

#include <bits/stdc++.h>
using namespace std;
int scoreOfString(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        sum += abs(s[i] - s[i + 1]);
    }
    return sum;
}
int main()
{
    string s = "hello";
    cout << scoreOfString(s);
    return 0;
}