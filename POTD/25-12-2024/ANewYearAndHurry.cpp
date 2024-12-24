// https://codeforces.com/problemset/problem/750/A
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int tl = 240 - k;
    int ts = 0;
    int count = 0;

    int i = 1;
    while (i <= n)
    {
        ts += 5 * i;
        if (ts > tl)
        {
            break;
        }
        count++;
        i++;
    }

    cout << count;

    return 0;
}