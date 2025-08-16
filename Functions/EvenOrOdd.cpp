#include <iostream>
using namespace std;
void printEven(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a;
    cout << "Enter a value of a : ";
    cin >> a;
    printEven(a);
    return 0;
}
// Enter a value of a : 8
// 2
// 4
// 6
// 8


