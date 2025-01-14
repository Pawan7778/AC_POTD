// https://www.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/0
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int numberOfGasStationRequired(vector<int> &arr, long double dist)
    {
        int cnt = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            int numberInbetween = ((arr[i] - arr[i - 1]) / dist);
            if ((arr[i] - arr[i - 1]) / dist == numberInbetween * dist)
            {
                numberInbetween--;
            }
            else
            {
                cnt += numberInbetween;
            }
        }
        return cnt;
    }

    double findSmallestMaxDist(vector<int> &stations, int k)
    {
        int n = stations.size();
        long double low = 0;
        long double high = 0;
        for (int i = 0; i < n - 1; i++)
        {
            high = max(high, (long double)(stations[i + 1] - stations[i]));
        }
        long double diff = 1e-6;
        while (high - low > diff)
        {
            long double mid = (low + high) / 2.0;
            int cnt = numberOfGasStationRequired(stations, mid);
            if (cnt > k)
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        return high;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends