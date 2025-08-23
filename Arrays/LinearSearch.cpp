#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 4, 5, 67, 8, 9};
    int key = 8;
    bool flag=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
           flag=1;
        }
    }
    cout<<"found";

}