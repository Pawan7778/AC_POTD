// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> ans(n);
    ll i = 0;
    ll res = 0;
    while (n--)
    {
        cin >> ans[i++];
    }
    for (auto x : ans)
    {
        if (x >= ans[k - 1] && x > 0)
        {
            res++;
        }
        else
        {
            break;
        }
    }
    cout << res << "\n";
    return 0;
}