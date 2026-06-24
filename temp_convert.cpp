#include<iostream>
using namespace std;
int main(){
    float C, F;

    cout<<"Enter temperature in celsius: ";
    cin>>C;

    cout<<"Enter temperature in fahrenheit: ";
    cin>>F;

    F = (C * 9 / 5) + 32;

    cout<<"Temperature in fahrenheit is: "<<F;

    return 0;
}