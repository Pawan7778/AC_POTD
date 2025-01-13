// https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
//{ Driver Code Starts
//  Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool canWePlace(vector<int> &arr, int dist, int k)
    {
        int stu = 1;
        int res = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (res + arr[i] > dist)
            {
                stu++;
                res = arr[i];
            }
            else
            {
                res += arr[i];
            }
        }
        return stu <= k;
    }
    int findPages(vector<int> &arr, int k)
    {
        int n = arr.size();
        if (n < k)
        {
            return -1;
        }
        int lo = 0;
        int hi = 0;
        for (int val : arr)
        {
            lo = max(val, lo);
            hi += val;
        }
        int ans = 0;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (canWePlace(arr, mid, k))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number)
        {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends