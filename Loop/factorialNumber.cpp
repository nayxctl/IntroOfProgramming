// Write C++ Program to find the Factorial of a Number. 

#include<iostream>
using namespace std;

int main(){
    int n,f,i;
    cout << "Enter the factorial number that you want: ";
    cin >> n;
    f=1;
    for(i=1;(n+1)>i;i++){
        f=f*i;
    }
    cout << "The factorial number is: " <<f;
    return 0;
}
