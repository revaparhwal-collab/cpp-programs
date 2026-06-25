#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter the age: ";
    cin>>age;

    if(age >= 18){
        cout<<"The person is eligible to vote."<<endl;
    }

    else{
        cout<<"The person is not eligible to vote."<<endl;
    }

    return 0;
}