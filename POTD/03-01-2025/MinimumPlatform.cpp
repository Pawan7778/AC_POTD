// https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int> &arr, vector<int> &dep)
    {
        // Your code here
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int i = 1;
        int j = 0;
        int maxcount = 1;
        int count = 1;
        int n = arr.size();
        while (i < n && j < n)
        {
            if (arr[i] <= dep[j])
            {
                i++;
                count++;
            }
            else
            {
                j++;
                count--;
            }
            maxcount = max(maxcount, count);
        }
        return maxcount;
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
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number)
        {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends