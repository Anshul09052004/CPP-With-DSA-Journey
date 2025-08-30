#include <bits/stdc++.h>
using namespace std;

int SqureRoot(vector<int> arr, int value)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int squre = 1;

    while (start <= end)
    {
        if (value == arr[mid])
        {
            squre = arr[mid] * arr[mid];
            return squre;
        }
        else if (value > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return squre;
}
int main()
{
    vector<int> arr{1, 7, 9, 11, 23, 66};
    int value = 23;
    int ans = SqureRoot(arr, value);
    if (ans == 1)
    {
        cout << "Value of squre not found";
    }
    else
    {
        cout << "Squre Root of Value is :" << ans;
    }

    return 0;
}
