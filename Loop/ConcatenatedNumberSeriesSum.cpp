/*
Write a program that takes an integer number n as input and find out the sum of the
following series up to n terms.
1 + 12 + 123 + 1234 + ..... ..
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int term=0, x,sum=0;
    cout << "Enter number of term: ";
    cin >> x;

    for(int i=1;i<=x;i++){
        term = (term * 10)+i;
        sum=sum+term;
    }
     cout << "Last term: "<<term <<endl;
     cout << "Result: "<<sum;
    return 0;
}
