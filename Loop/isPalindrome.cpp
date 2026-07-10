// Write a C++ program to check whether a number is palindrome or not.

#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        int digit = num % 10;    
        reversed = reversed * 10 + digit; 
        num /= 10;                
    }

    if (original == reversed) {
        cout << original << " is a Palindrome number." << endl;
    } else {
        cout << original << " is not a Palindrome number." << endl;
    }

    return 0;
}
