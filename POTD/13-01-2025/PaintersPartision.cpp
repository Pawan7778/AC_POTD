// https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

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
        // if(n < k){
        //     return -1;
        // }
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
    int minTime(vector<int> &arr, int k)
    {
        // code here
        // return minimum time
        return findPages(arr, k);
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends