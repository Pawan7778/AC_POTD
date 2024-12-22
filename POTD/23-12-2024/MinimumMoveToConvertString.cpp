#include <iostream>
#include <string>
using namespace std;
int minimumMoves(string s)
{
    int n = s.length();
    int output = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'O')
        {
            i++;
        }
        else
        {
            i = i + 3;
            output++;
        }
    }
    return output;
}
int main()
{
    cout << minimumMoves("OXOX");
    return 0;
}