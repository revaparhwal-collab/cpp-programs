#include<iostream>
using namespace std;
int main(){
    int amount;

    cout<<"Enter the money amount: ";
    cin>>amount;

    int n100 = amount / 100;
    cout<<"Number of 100 rupee notes is: "<<n100<<endl;
    amount = amount % 100;

    int n50 = amount / 50;
    cout<<"Number of 50 rupee notes is: "<<n50<<endl;
    amount = amount % 50;

    int n20 = amount / 20;
    cout<<"Number of 20 rupee notes is: "<<n20<<endl;
    amount = amount % 20;

    int n10 = amount / 10;
    cout<<"Number of 10 rupee notes is: "<<n10<<endl;
    amount = amount % 10;

    int n5 = amount / 5;
    cout<<"Number of 5 rupee notes is: "<<n5<<endl;
    
    return 0;
}