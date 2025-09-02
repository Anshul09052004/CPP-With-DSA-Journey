#include <bits/stdc++.h>
using namespace std;

int LowerBound(vector<int> arr, int value)
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
            end = mid - 1;
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
    vector<int> arr{1, 2, 4, 4, 4, 4, 4, 11, 23, 66};
    int value = 4;
    int lowerBound = LowerBound(arr, value);
    int upperBound = UpperBound(arr, value);
    int occurence = (upperBound - lowerBound +1 );
    if (occurence == -1)
    {
        cout << "value not Found";
    }
    else
    {
        cout << "Total Occerance of " << value<<" " << "is : " << occurence;
    }

    return 0;
}
