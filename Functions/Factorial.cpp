#include <iostream>
using namespace std;
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    cout << result << endl;

    return result;
}
int main()
{
    int a;
    cout << "Enter a value of a : ";
    cin >> a;
    factorial(a);
    return 0;
}

// Enter a value of a : 7
// 5040
