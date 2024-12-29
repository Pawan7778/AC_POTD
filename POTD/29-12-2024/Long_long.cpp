// https://codeforces.com/problemset/problem/1843/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define v vector<ll>
void solve()
{
    ll n;
    cin >> n;
    v arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += abs(arr[i]);
    }
    ll count = 0;
    for (ll i = 0; i < n;)
    {
        ll j = i + 1;
        if (arr[i] < 0)
        {
            if (j == n)
            {
                count++;
                break;
            }
            while (arr[j] < 0 || arr[j] == 0)
            {
                j++;
                if (j == n)
                    break;
            }
            count++;
        }
        i = j;
    }
    cout << sum << " " << count << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
