/*
Write a program that calculates the sum of the squares of all the odd numbers between I and a given number. 
For example, if the user inputs the number I00, the program should print out 165 (which is the sum of I +9+25+49+81).
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){

     int x,n,sum=0;
     cout << "Enter a value of n: ";
     cin >> n;

     for(x=1;n>=x;x++){
        if(x%2!=0){
            int root = sqrt(x);
            if (root*root==x){
                sum=sum+x;
            }
        }
     }
     cout << sum;
     return 0;
}
