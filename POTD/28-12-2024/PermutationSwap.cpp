// https://codeforces.com/problemset/problem/1828/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll v;
        cin >> n;
        ll ans = 0;
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