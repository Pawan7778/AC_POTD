// https://leetcode.com/problems/reverse-words-in-a-string/
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    string res = "";
    int n = s.length();
    int i = 0;
    while (i < n && s[i] == ' ')
    {
        i++;
    }

    vector<string> tmp;
    while (i < n)
    {

        while (i < n && s[i] == ' ')
        {
            i++;
        }
        while (i < n && s[i] != ' ')
        {
            res += s[i];
            i++;
        }
        tmp.push_back(res);
        res = "";
    }
    reverse(tmp.begin(), tmp.end());
    string result = "";
    for (int i = 0; i < tmp.size(); i++)
    {
        result += tmp[i];
        if (i != tmp.size() - 1)
        {
            result += " ";
        }
    }
    int j = 0;
    while (j < result.length() && result[j] == ' ')
    {
        j++;
    }
    string finalans = "";
    while (j < result.length())
    {
        finalans += result[j];
        j++;
    }
    return finalans;
}
int main()
{
    cout << reverseWords(" Hello world  ");
    return 0;
}