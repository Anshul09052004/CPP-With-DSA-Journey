#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr{0,0,0,1,1,0,0,1,0,1};
    int countZero=0;
    int countOne=0;
    for (int i = 0; i < arr.size(); i++)
    {
       if(arr[i]==0){
        countZero++;
       }
       if(arr[i]==1)
       {
        countOne++;
       }
    }
    cout<<"Number of zero is : "<<countZero<<endl ;
    cout<<"Number of one is : "<< countOne<<endl;
    
}
// Number of zero is : 6
// Number of one is : 4