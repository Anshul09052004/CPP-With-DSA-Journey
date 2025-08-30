#include <bits/stdc++.h>
using namespace std;
void DuplicateFind(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int i=0; 
    int j=1;
  while(j<arr.size())
    {
        if (arr[i]==arr[j])
        {
            cout<<"Duplicate is"<<arr[i];
            i++;
            j++;
        }
        
    }
     for (int i = 0; i < arr.size(); i++)
    {
      
        cout << arr[i] <<" ";
       
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
    DuplicateFind(arr);

    return 0;
}
