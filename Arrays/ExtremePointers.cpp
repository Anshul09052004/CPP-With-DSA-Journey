#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{2, 5, 6, 9, 2, 6, 7};
    int start = 0;
    int end = arr.size() - 1;
    while (start<=end)
    {
        cout << arr[start] << " ";
        cout <<arr[end]<<" " ;
        start++;
        end--;
    }
}
// 2 7 5 6 6 2 9 9 
