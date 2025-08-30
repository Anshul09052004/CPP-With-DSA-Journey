#include <bits/stdc++.h>
using namespace std;
void negativeBegning(vector<int> arr)
{
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
             swap(arr[i], arr[j]);
        }
       
        j++;
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
    negativeBegning(arr);

    return 0;
}
