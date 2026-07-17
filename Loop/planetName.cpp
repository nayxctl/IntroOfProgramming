/*
Write a program that asks the user to enter the name and diameter of each planet in the solar system and print them in the Command Prompt. 
The program should then use a loop to print out the name and diameter of each planet.
*/

#include<iostream>

using namespace std;

int main(){
    string planet;
    int planet_diameter;

    int n=0;
    while(n<8){
        cout << "Enter the planet name: ";
        cin >> planet;
        cout <<endl <<"Enter the diameter of that plant: ";
        cin >> planet_diameter;
        cout <<endl<< "Your planet name is "<<planet << " and diameter is "<<planet_diameter<<"km\n";
        n++;
    }
    return 0;
}
