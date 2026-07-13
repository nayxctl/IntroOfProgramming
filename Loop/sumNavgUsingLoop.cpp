// C++ Program to Find Sum and Average of n numbers using for loop.

#include<iostream>
using namespace std;

int main(){
    int n,m;

    cout << "Enter the number of array size: ";
    cin >> n;
    cout << endl;

    int sum=0, avg;
    float num[n];

    cout << "Enter the numbers: " << endl;
    for(m=0;m<n;m++){
        cin >> num[m];
    }
    for(m=0;m<n;m++){
        sum+=num[m];
    }
    cout << "Sum=" <<sum <<endl;
    avg=sum/n;
    cout <<"Avg=" <<avg;
    return 0;
}
