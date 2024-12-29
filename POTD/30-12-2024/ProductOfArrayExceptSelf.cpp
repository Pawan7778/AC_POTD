// https://leetcode.com/problems/product-of-array-except-self/description/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pre(n), suf(n);
    vector<int> res(n);

    pre[0] = nums[0];
    for (int i = 1; i < n; ++i)
    {
        pre[i] = nums[i] * pre[i - 1];
    }

    suf[n - 1] = nums[n - 1];
    for (int j = n - 2; j >= 0; --j)
    {
        suf[j] = nums[j] * suf[j + 1];
    }
    res[0] = suf[1];
    res[n - 1] = pre[n - 2];
    for (int i = 1; i < n - 1; ++i)
    {
        res[i] = pre[i - 1] * suf[i + 1];
    }

    return res;
}
vi productExceptSelfOpt(vi &nums)
{
    int n = nums.size();
    vi res(n, 1);
    int pre = 1, suf = 1;
    for (int i = 0; i < n; i++)
    {
        res[i] = res[i] * pre;
        pre = pre * nums[i];
        res[n - i - 1] *= suf;
        suf = suf * nums[n - i - 1];
    }

    return res;
}

void display(vi &nums)
{
    for (auto x : nums)
    {
        cout << x << " ";
    }
}
int main()
{
    vi nums = {1, 2, 3, 4};
    vi ans = productExceptSelfOpt(nums);
    display(ans);
    return 0;
}