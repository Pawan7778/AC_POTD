#include <vector>
#include <iostream>
using namespace std;
int minimumOperations(vector<int> &nums)
{
    int op = 0;
    for (auto x : nums)
    {
        if (x % 3 != 0)
        {
            if ((x - 1) % 3 == 0)
            {
                op++;
            }
            else if ((x + 1) % 3 == 0)
            {
                op++;
            }
        }
    }
    return op;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    cout << minimumOperations(nums);
    return 0;
}