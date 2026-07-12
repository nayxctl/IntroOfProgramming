// Write C++ program to find HCF and LCM of two numbers. 

#include<iostream>
using namespace std;

int main(){
    int num1, num2, a, b, hcf, lcm;

    cout << "Enter first number: ";
    cin >> num1;
    cout <<endl<< "Enter second number: ";
    cin >> num2;

    a = num1;
    b = num2;

    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    hcf = a;
    lcm = (num1 * num2) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
