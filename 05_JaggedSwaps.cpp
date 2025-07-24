#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int size = 10;
        while (size--)
        {
            for (int i = 1; i <= n - 2; i++)
            {
                if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        if (isSorted(arr.data(), n))
        {
            cout << "YES" << "\n";
            continue;
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}