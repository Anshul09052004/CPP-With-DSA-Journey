#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "value 1 : ";
    cin >> a;
    cout << "value 2 : ";
    cin >> b;
    cout << "value 3 : ";
    cin >> c;
    int peremeterOfTriangle = a + b + c;
    cout << "The perementer of triangle is :" << peremeterOfTriangle;
    return 0;
}

// output
/*
value 1 : 4
value 2 : 7
value 3 : 98
The perementer of triangle is :109*/