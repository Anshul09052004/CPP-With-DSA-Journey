#include <iostream>
using namespace std;
float AreaOfCircle(float n)
{

    float result = 3.14 * n * n;
    return result;
}
int main()
{
    int r;
    cout << "Enter a value of radius : ";
    cin >> r;
     float result = AreaOfCircle(r);
    cout << "Area of circle is : " << result;
    return 0;
}

// Enter a value of radius : 67
// Area of circle is : 14095.5
