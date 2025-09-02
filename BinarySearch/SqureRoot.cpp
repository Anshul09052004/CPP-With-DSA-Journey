#include <bits/stdc++.h>
using namespace std;

int SquareRootInt(int value)
{
    int start = 0;
    int end = value;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == value)
        {
            return mid;
        }
        else if (mid * mid < value)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {

            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{

    int value = 10;
    int intPart = SquareRootInt(value);
    double finalAns = intPart;

    double step = 0.1;
     int precision;
    cout<<"enter no. of presicion"<<endl;
    cin>>precision;
    // 3 decimal places

    for (int i = 0; i < precision; i++)
    {
        while ((finalAns + step) * (finalAns + step) <= value)
        {
            finalAns += step;
        }
        step /= 10; // go to next decimal place
    }

    cout << fixed << setprecision(precision); // 3 decimal precision in output
    cout << "Square root of " << value << " is: " << finalAns << endl;
    return 0;
}
