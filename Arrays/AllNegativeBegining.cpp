#include <bits/stdc++.h>
using namespace std;
void negativeBegning(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[start] > 0 && arr[end] < 0)
        {
            swap(arr[start], arr[end]);
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else if (arr[start] < 0)
        {
            start++;
        }
        else
        {
            start++;
            end--;
        }
    }
    sort(arr.begin(),arr.end());
     for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter any number to create size of an array : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
    }
    negativeBegning(arr);

    return 0;
}
