#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int j = 0;
    int count = 1;
    int n = chars.size();
    for (int i = 1; i < chars.size();)
    {
        if (chars[i] == chars[i - 1])
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                j++;
                char ch = '0' + count;
                chars[j] = ch;
                j++;
            }
            else
            {
                j++;
            }
            count = 1;
        }
        i++;
    }
    return j;
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int ans = compress(chars);
    for (int i = 0; i < ans; i++)
    {
        cout << chars[i] << " ";
    }

    return 0;
}