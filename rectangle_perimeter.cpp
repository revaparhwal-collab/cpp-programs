/*Write a C++ program to compute the perimeter and area of a 
rectangle with the given length and breadth.*/
#include<iostream>
using namespace std;
int main(){
    int length, breadth, perimeter, area;

    cout<<"Enter length: ";
    cin>>length;

    cout<<"Enter breadth: ";
    cin>>breadth;

    perimeter = 2 * (length + breadth);
    cout<<"Perimeter of rectangle is: "<<perimeter<<endl;

    area = length * breadth;
    cout<<"Area of the rectangle is: "<<area<<endl;

    return 0;
}
