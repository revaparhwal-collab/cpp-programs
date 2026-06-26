#include<iostream>
using namespace std;
int main(){
int a = 42;
int & b = a;

cout<<"Value of a is: "<<a<<endl;
cout<<"Value of b is: "<<b<<endl;

b = 32;

/*VALUE OF A WILL ALSO CHANGE AFTER CHANGING THE VALUE OF B BECAUSE A AND B ARE 
POINTING TO THE SAME VARIABLE IN THE MEMORY LOCATION . SO AFTER CHANGING THE VALUE 
OF B , THE VALUE IN THE MEMORY LOCATION CHANGES AND HENCE VALUE OF A CHANGES AS WELL.*/

cout<<"Changed value of a is: "<<a<<endl;
cout<<"Changed value of b is: "<<b<<endl;

return 0;
}