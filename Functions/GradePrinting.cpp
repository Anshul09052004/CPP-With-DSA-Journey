#include <iostream>
using namespace std;
char gradePrint(int a)
{
    if (a >= 90)
        return 'A';
    else if (a >= 80)
        return 'B';
    else if (a >= 70)
        return 'C';
    else if (a >= 60)
        return 'D';
    else
        return 'E';
}
int main()
{
    int a;
    cout << "Enter a value of a : ";
    cin >> a;
   

    char grade = gradePrint(a);
    cout << "the grade is : " << grade;;
    return 0;
}

// Enter a value of a : 90
// the grade is : A

