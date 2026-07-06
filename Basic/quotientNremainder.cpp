// Write C++ Program to Find Quotient and Remainder of 2 numbers.

#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    int Quotient,Remainder;
    cout << "Enter two values that will something like \nNumberOne / NumberTwo.\n";
    cin >> num1>>num2;

    Quotient=num1/num2;
    Remainder=num1%num2;

    cout << "The quotient is " <<Quotient <<endl;
    cout << "The remainder is " <<Remainder;

    return 0;
}
