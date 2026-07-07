// Write C++ program to Print the Multiplication Table of a given number. 

#include<iostream>
using namespace std;

int main(){
    int n,x,h,num;
    cout << "Enter the Multiplication number: ";
    cin >> n;
    num=n;
    cout << "How many times??";
    cin >> h;

    for(x=1;x<h;x++){
        n=h*x;
        cout << num <<" X "<< x <<"=" << n <<endl;
    }
    return 0;
}
