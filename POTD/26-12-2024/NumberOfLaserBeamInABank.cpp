// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/
#include <bits/stdc++.h>
using namespace std;
int numberOfBeams(vector<string> &bank)
{
    int prevCount = 0;
    int result = 0;
    for (string &row : bank)
    {
        int count1 = count(row.begin(), row.end(), '1');
        if (count1 > 0)
        {
            result = result + prevCount * count1;
            prevCount = count1;
        }
    }
    return result;
}
int main()
{
    vector<string> bank = {"011001", "000000", "010100", "001000"};
    cout << numberOfBeams(bank);
    return 0;
}