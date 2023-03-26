#include <iostream>

using namespace std;

int main(){
    //const int a=3;
    int a=3;
    //const char c='c';
    char c='c';
    //const float f=45.47;
    float f=45.47;
    cout<<"The value of a was: "<<a<<endl;
    cout<<"The value of c was: "<<c<<endl;
    cout<<"The value of f was: "<<f<<endl;
    a=5;
    c='m';
    f=6.4;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of f is: "<<f<<endl;

    return 0;

}