#include <bits/stdc++.h>
using namespace std;
int foo(int num)
{
    int sum = 0;
    while (num)
    {
        sum += pow(num % 10, 2);
        num /= 10;
    }
    return sum;
}
bool isHappy(int n)
{
    unordered_set<int> unset;
    while (1)
    {
        if (unset.count(n))
        {
            return false;
        }

        unset.insert(n);
        n = foo(n);
        if (n == 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cout << isHappy(19);
    return 0;
}