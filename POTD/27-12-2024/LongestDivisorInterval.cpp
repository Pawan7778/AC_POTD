#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= 1000; i++)
    {
        if (n % i)
        {
            cout << i - 1 << '\n';
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        solve();
        t--;
    }

    return 0;
}