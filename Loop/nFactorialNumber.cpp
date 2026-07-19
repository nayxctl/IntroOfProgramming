// Write a program (WAP) that will print the factorial (N!) of a given number N. 
// Please see the sample input output.

#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter the n value: ";
   cin >> n;
   int first=1,factorial,ini_facto=1;

   for(int i=0;i<(n);i++){
    ini_facto=first*(i+1);
    first = ini_facto;
    factorial=ini_facto;
    ini_facto++;
   }
   cout << factorial;
}
