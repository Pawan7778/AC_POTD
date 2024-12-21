#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int res = 0;
    for (auto i : nums)
    {
        res = res ^ i;
    }
    return res;
}
int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums);
}