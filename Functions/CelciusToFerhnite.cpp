#include <iostream>
using namespace std;
int CelciusToFerhnite(int n)
{
    int result = n * 9 / 5 + 32;
    return result;
}
int main()
{
    int a;
    cout << "Enter a value of Celcius : ";
    cin >> a;
   int result= CelciusToFerhnite(a);
   cout<<"The value of Ferhnite is : "<<result;
    return 0;
}

// Enter a value of Celcius : 23
// The value of Ferhnite is : 73