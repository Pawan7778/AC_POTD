// https://cses.fi/problemset/task/1618/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n)
    {
        sum += n / 5;
        n = n / 5;
    }
    cout << sum;
    return 0;
}