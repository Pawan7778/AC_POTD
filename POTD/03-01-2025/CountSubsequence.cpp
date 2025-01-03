// https://codeforces.com/problemset/problem/1582/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define i int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    i t;
    cin >> t;
    while (t--)
    {
        i n;
        cin >> n;
        ll one = 0;
        ll zero = 0;
        while (n--)
        {
            ll val;
            cin >> val;
            if (val == 1)
            {
                one++;
            }
            else if (val == 0)
            {
                zero++;
            }
        }
        ll res = one * pow(2, zero);
        cout << res << "\n";
    }
    return 0;
}