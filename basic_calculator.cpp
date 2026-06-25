#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    char op;

    cout<<"Enter 1st no.: ";
    cin>>num1;

    cout<<"Enter the operator(+ , - , * , /): ";
    cin>>op;

    cout<<"Enter 2nd no.: ";
    cin>>num2;

    switch(op){
        case '+':
            cout<<"Result = "<<num1 + num2<<endl;
        break;

        case '-': 
            cout<<"Result = "<<num1 - num2<<endl;
        break;

         case '*': 
            cout<<"Result = "<<num1 * num2<<endl;
        break;

         case '/': 
            if(num2 != 0){
                cout<<"Result = "<<num1 / num2<<endl;
        }
        
            else{
                cout<<"Error: Cnnot divide by zero."<<endl;
        }
        break;

        default:
            cout<<"Innvalid operator."<<endl;
    }

    return 0;
}