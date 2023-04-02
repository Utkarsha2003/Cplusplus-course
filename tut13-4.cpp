#include <iostream>
using namespace std;

int main(){
    int a1[] = {11, 22, 33, 44};
    int* p1 = a1;
    cout<<*p1<<endl;
    cout<<*(p1++)<<endl;
    cout<<*p1<<endl<<endl;
    
    int a2[] = {11, 22, 33, 44};
    int* p2 = a2;
    cout<<*p2<<endl;
    cout<<*(p2++)<<endl;
    cout<<*(++p2)<<endl;

    return 0;
}