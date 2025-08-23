#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{2, 5, 6, 9, 2, 6, 7};
    int start = 0;
    int end = arr.size() - 1;
    while (start <=end)
    {
      swap(arr[start],arr[end]);
      start++;
      end--;

    }
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
// 7 6 2 9 6 5 2 
