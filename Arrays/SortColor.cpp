#include <bits/stdc++.h>
using namespace std;
void sort01(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (start != end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
         }

        if (arr[i] == 1)
        {
            start++;
        }
        if (arr[i] == 2)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
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
    sort01(arr);

    return 0;
}
// enter any number to create size of an array : 6
// Enter element : 0
// Enter element : 1
// Enter element : 0
// Enter element : 1
// Enter element : 1
// Enter element : 0
// 0 0 0 1 1 1
