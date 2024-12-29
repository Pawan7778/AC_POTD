// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
#include <bits/stdc++.h>
using namespace std;
int minPartitions(string n)
{
    int v = 0;
    for (char ch : n)
    {
        int temp = ch - '0';
        v = max(v, temp);
    }
    return v;
}
int main()
{
    cout << minPartitions("32");
    return 0;
}