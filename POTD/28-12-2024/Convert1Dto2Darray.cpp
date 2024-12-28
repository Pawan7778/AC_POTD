// https://leetcode.com/problems/convert-1d-array-into-2d-array/description/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{

    if ((original.size() != m * n))
    {
        return {};
    }
    vector<vector<int>> res(m, vector<int>(n));
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = original[k];
            k++;
        }
    }
    return res;
}
void display(vector<vector<int>> &ans)
{
    for (auto &row : ans)
    {
        for (auto &col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<int> num = {1, 2, 3, 4};
    vector<vector<int>> ans;

    ans = construct2DArray(num, 2, 2);
    display(ans);
    return 0;
}