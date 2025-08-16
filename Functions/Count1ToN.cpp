#include <iostream>
using namespace std;
void count1ToN(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int a;
    cout << "Enter a value of a : ";
    cin >> a;
    count1ToN(a);
    return 0;
}

// Enter a value of a : 7
// 1
// 2
// 3
// 4
// 5
// 6
// 7

