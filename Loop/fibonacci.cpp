// Write a program (WAP) that will print Fibonacci series upto Nth terms.
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, .

#include <iostream>
using namespace std;

int main() {
    int n,a;
    int Fibonacci[100];
    cout << "Enter the n value:";
    cin >> n;
    int y=1;
    int x=1;
    for(a=2;a<n;a++){
        Fibonacci[a]=x+y;
        y=x;
        x=Fibonacci[a];
    }
    Fibonacci[0]=1;
    Fibonacci[1]=1;
    for(a=0;a<n;a++){
        cout << Fibonacci[a]<<", ";
    }

    return 0;
}
