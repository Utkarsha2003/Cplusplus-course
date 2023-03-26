#include <iostream>
//manipulators
#include <iomanip>

using namespace std;
 int main(){
    int a=3, b=78, c=1233;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl<<endl;

    cout<<"The value of a is: "<<setw(6)<<a<<endl;
    cout<<"The value of b is: "<<setw(6)<<b<<endl;
    cout<<"The value of c is: "<<setw(6)<<c<<endl;


    return 0;
 }