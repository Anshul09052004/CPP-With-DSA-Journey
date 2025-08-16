#include <iostream>
using namespace std;
int maxOf(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
int main()
{
    int a;
    cout << "Enter a value of a : ";
    cin >> a;
    int b;
    cout << "Enter a value of b : ";
    cin >> b;
    int c;
    cout << "Enter a value of c : ";
    cin >> c;

    int maximumOf = maxOf(a, b, c);
    cout << "maximum of a b and c is : " << maximumOf;
    return 0;
}

// Enter a value of a : 5
// Enter a value of b : 8
// Enter a value of c : 22
// maximum of a b and c is : 22