// Write C++ program to swap the first and last digit of a number.

#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter your number: ";
    cin >> x;

    while(x>0){
        cout << x%10;
        x=x/10; //x/10==x  == ar = same na
    }
    return 0;
}
