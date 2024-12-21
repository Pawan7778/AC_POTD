// link - https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    // code here
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    cout << gcd(15, 30);
    return 0;
}