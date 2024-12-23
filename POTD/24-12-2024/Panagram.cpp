#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s(n, ' ');
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    unordered_map<char, int> mp;
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        mp[ch]++;
    }
    for (char ch : s)
    {
        if (ch >= 65 && ch <= 90)
        {
            mp.erase(ch);
        }
        else if (ch >= 97 && ch <= 122)
        {
            mp.erase(ch - 32);
        }
        if (mp.size() == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}