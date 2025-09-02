#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr, int value)
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
           return mid;
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
    vector<int> arr{1, 2, 4, 11, 23, 66};
    int value = 4;
    int ans = BinarySearch(arr, value);
    if (ans == -1)
    {
        cout << "value not Found";
    }
    else
    {
        cout << "Index find at :" << ans;
    }

    return 0;
}
