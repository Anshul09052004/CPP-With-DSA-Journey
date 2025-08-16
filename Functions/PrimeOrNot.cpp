#include <iostream>
using namespace std;
int prime(int n)
{
  if(n==1)
  {
    cout<<"1 is not a prime number";
  }
  else
  {
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime number";
    }
    else
    {
        cout<<"not a prime number";
    }
  }
}
int main()
{
    int a;
    cout << "Enter a value of a : ";
    cin >> a;
    prime(a);
    return 0;
}

// Enter a value of a : 6
// not a prime number