#include<iostream>
using namespace std;
int main(){
    int units;
    int bill;

    cout<<"Enter the units: ";
    cin>>units;

    if(units <= 100){
        bill = units * 5;
        cout<<"The electricity bill is: "<<bill<<endl;
    }

    else if(units <= 200){
        bill = (100 * 5) + ((units - 100) * 7);
        cout<<"The electricity bill is: "<<bill<<endl;
    }

    else{
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        cout<<"The electricity bill is: "<<bill<<endl;
    }
}