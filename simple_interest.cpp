#include<iostream>
using namespace std;
int main(){
    float p, r, t, simple_interest;
    cout<<"The principal, rate and time are: ";
    cin>>p>>r>>t;
    simple_interest = (p*r*t)/100;
    cout<<"The simple interest is: "<<simple_interest;
    return 0;
}