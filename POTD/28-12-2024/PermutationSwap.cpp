// https://codeforces.com/problemset/problem/1828/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long v;
        cin >> n;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            if (abs(v - i) != 0)
            {
                ans = gcd(ans, abs(v - i));
            }
        }
        cout << ans << "\n";
    }
    return 0;
}