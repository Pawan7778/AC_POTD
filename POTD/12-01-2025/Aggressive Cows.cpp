// https://www.geeksforgeeks.org/problems/aggressive-cows/1
//{ Driver Code Starts
//  Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool canWePlace(vector<int> &stalls, int dist, int k)
    {
        int countCows = 1;
        int last = stalls[0];
        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - last >= dist)
            {
                countCows++;
                last = stalls[i];
            }
            if (countCows >= k)
            {
                return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k)
    {
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int lo = 1;
        int hi = stalls[n - 1] - stalls[0];
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (canWePlace(stalls, mid, k))
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return hi;
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

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num)
        {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends