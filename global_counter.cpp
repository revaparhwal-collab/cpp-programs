#include<iostream>
using namespace std;
int counter = 0;
int main(){

    cout<<"Initial counter: "<<counter<<endl;

    counter = counter + 1;
    cout<<"Increased value of counter after 1st increase is: "<<counter<<endl;

    counter = counter + 1;
    cout<<"Increased value of counter after 2nd increase is: "<<counter<<endl;

    return 0;
}