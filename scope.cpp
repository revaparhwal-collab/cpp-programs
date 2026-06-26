#include<iostream>
using namespace std;
int x = 44;
int main(){
    int x = 68;

    cout<<"The value of local variable x is: "<<x<<endl;
    cout<<"The value of global variable x is: "<<::x<<endl;
    return 0;

}
