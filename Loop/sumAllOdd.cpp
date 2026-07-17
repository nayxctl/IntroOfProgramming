/*
Write a program that calculates the sum of the squares of all the odd numbers between I and a given number. 
For example, if the user inputs the number I00, the program should print out 165 (which is the sum of I +9+25+49+81).
*/

#include<iostream>
using namespace std;

int main(){
    float planet_mass;
    float total_mass = 0;
    int n = 0;

    while(n < 8){
        cout << "Enter the mass of planet " << (n+1) << " (in kg): ";
        cin >> planet_mass;

        total_mass = total_mass + planet_mass;
        n++;
    }

    cout << "\nTotal mass of the solar system's planets is: " << total_mass << " kg\n";

    return 0;
}
