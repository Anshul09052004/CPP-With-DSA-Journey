#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> arr, int value)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[value] < arr[value + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        if (start > arr[value])
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
    vector<int> arr{1, 10,5,4,2,};
    int value=10;
    int ans = peakElement(arr, value);
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
