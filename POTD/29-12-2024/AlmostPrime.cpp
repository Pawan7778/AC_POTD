// https://codeforces.com/problemset/problem/26/A
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

    ll count = 0;
    for (ll num = 1; num <= n; num++)
    {
        ll temp = num;
        unordered_set<ll> s;

        while (temp % 2 == 0)
        {
            s.insert(2);
            temp = temp / 2;
        }
        while (temp % 3 == 0)
        {
            s.insert(3);
            temp = temp / 3;
        }

        for (ll i = 5; i * i <= temp; i += 6)
        {
            while (temp % i == 0)
            {
                s.insert(i);
                temp = temp / i;
            }
            while (temp % (i + 2) == 0)
            {
                s.insert(i + 2);
                temp = temp / (i + 2);
            }
        }

        if (temp > 3)
        {
            s.insert(temp);
        }

        if (s.size() == 2)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
