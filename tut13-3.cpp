#include <iostream>
using namespace std;

int main(){
    int d[] = {11, 22, 33, 44, 55};
    int* p = d;
    cout<<"Pointers in Arrays"<<endl;
    cout<<"Here, d[] is the array and p is the pointer."<<endl;
    cout<<"The value of array-pointer *p is - "<<*p<<endl;
    cout<<"The value of array-pointer *(p+1) is - "<<*(p+1)<<endl;
    cout<<"The value of array-pointer *(p+2) is - "<<*(p+2)<<endl;
    cout<<"The value of array-pointer *(p+3) is - "<<*(p+3)<<endl;
    cout<<"The value of array-pointer *(p+4) is - "<<*(p+4)<<endl<<endl;
    cout<<"Generally;\nIf int a = 3; then int* b = &a; \nThe address  of a will be <<b or <<&a = 0X61ff08\nAnd the value of a will be <<a or <<*b(value at address b - b ka address->a->a ka value->3) = 3 \nBut in Arrays if int a[] = {..}; then int* b = a; and not int* b = &a;";

   

    return 0;
}