// https://codeforces.com/problemset/problem/750/A
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int tl = 240 - k;
    int count = 0;
    int lo = 0;
    int hi = n;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int ts = (5 * mid * (mid + 1)) / 2;
        if (ts <= tl)
        {
            count = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << count;

    return 0;
}