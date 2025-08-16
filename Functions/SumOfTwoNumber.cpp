#include<iostream>
using namespace std;
int getSum(int a,int b){
    int result =a+b;
    return result;

}
int main(){
    int a;
    cout<<"Enter a value of a : ";
    cin>>a;
    int b;
    cout<<"Enter a value of b : ";
    cin>>b;

    int Sum =getSum(a,b);
    cout<<"Sum of a and b is : "<<Sum;
    return 0;
}

// Enter a value of a : 5
// Enter a value of b : 5
// Sum of a and b is : 10