#include<iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter the 1st number: ";
    cin>>num1;

    cout<<"Enter the 2nd number: ";
    cin>>num2;

    if(num1 > num2){
        cout<<"1st number is largest."<<endl;
    }

    else if(num1 < num2){
        cout<<"2nd number is largest."<<endl;
    }

    else{
        cout<<"Both are equal."<<endl;
    }

    return 0;
}