#include<iostream>
using namespace std;
int main(){
    int num5;
    int num1 = 24;
    int & num2 = num1;

    cout<<"Value of num1 is: "<<num1<<endl;
    cout<<"Value of num2 is: "<<num2<<endl;

    int num3 = 34;
    int & num4 = num3;

    cout<<"Value of num3 is: "<<num3<<endl;
    cout<<"Value of num4 is: "<<num4<<endl;

   num5 = num2;
   num2 = num4;
   num4 = num5;

    cout<<"Swapped Value of num2 is: "<<num2<<endl;
    cout<<"Swapped Value of num4 is: "<<num4<<endl;

    //VALUE OF NUM1 AND NUM3 WILL BE SWAPPED TOO

    cout<<"Swapped Value of num1 is: "<<num1<<endl;
    cout<<"Swapped Value of num3 is: "<<num3<<endl;

    return 0;
}


