// Write a C++ Program to print the Prime numbers between 1 to 100. 

#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool prime;

    for (n = 2; n < 100; n++) {
        prime = true;

        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << n << " is Prime number" << endl;
        else
            cout << n << " is not Prime number" << endl;
    }

    return 0;
}
