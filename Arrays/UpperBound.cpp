#include <bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> arr, int value)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (value == arr[mid])
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 4, 4, 4, 4, 4, 6, 7, 9, 11, 23, 66};
    int value = 4;
    int ans = UpperBound(arr, value);
    if (ans == -1)
    {
        cout << "value of occerance not found";
    }
    else
    {
        cout << "Last Occurence  at index :" << ans;
    }

    return 0;
}
