#include <bits/stdc++.h>
using namespace std;
int getUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
    }
    int uniqueElement = getUnique(arr);
    cout << "unique element is : " << uniqueElement;

    return 0;
}

// Enter a number : 7
// Enter element : 2
// Enter element : 2
// Enter element : 6
// Enter element : 6
// Enter element : 8
// Enter element : 8
// Enter element : 2
// unique element is : 2
