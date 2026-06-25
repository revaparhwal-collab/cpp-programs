#include<iostream>
using namespace std;
int main(){
    const float PI = 3.14;
    float circle_area;
    int r;
    cout<<"The value of radius is: ";
    cin>>r;

    circle_area = PI * r * r;

    cout<<"The area of circle is: "<<circle_area<<endl;

    return 0;

}