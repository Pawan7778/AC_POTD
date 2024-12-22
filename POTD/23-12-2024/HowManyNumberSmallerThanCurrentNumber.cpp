#include <iostream>
#include <vector>
using namespace std;
// naive approach
vector<int> smallerNumbersThanCurrentN(vector<int> &nums)
{
    vector<int> res;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] < nums[i] && j != i)
            {
                count++;
            }
        }
        res.push_back(count);
    }
    return res;
}
// counting sort approach
vector<int> smallerNumbersThanCurrentB(vector<int> &nums)
{
    int n = nums.size();
    int arr[101] = {0};
    for (auto x : nums)
    {
        arr[x]++;
    }
    for (int i = 1; i < 101; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            res[i] = 0;
        }
        else
        {
            res[i] = arr[nums[i] - 1];
        }
    }
    return res;
}
void display(vector<int> &nums)
{
    for (auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> ans;
    ans = smallerNumbersThanCurrentB(nums);
    display(ans);
    return 0;
}