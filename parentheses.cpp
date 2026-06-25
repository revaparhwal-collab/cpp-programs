#include<iostream>
using namespace std;
int main(){
    int a, b;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Entter b: ";
    cin>>b;

    cout<<"Without parentheses: "<<a + b * 40<<endl;
    cout<<"With parentheses: "<<(a + b) * 40<<endl;

    return 0;
}