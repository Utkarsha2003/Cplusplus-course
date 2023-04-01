#include <iostream>
using namespace std;

int main(){
    cout<<"Array Method 1 -"<<endl;
    int marks[4] = {23, 45, 56, 89};
    cout<<"Marks of A - "<<marks[0]<<endl; 
    cout<<"Marks of B - "<<marks[1]<<endl;
    cout<<"Marks of C - "<<marks[2]<<endl;
    cout<<"Marks of D - "<<marks[3]<<endl<<endl;

    cout<<"Array Method 2 -"<<endl;
    int skills[] = {23, 45, 56, 89};
    cout<<"Skills of A - "<<skills[0]<<endl;
    cout<<"Skills of B - "<<skills[1]<<endl;
    cout<<"Skills of C - "<<skills[2]<<endl;
    cout<<"Skills of D - "<<skills[3]<<endl<<endl;

    cout<<"Array Method 3 -"<<endl;
    int vibes[4];
    vibes[0] = 23;
    cout<<"Vibes of A - "<<vibes[0]<<endl;
    vibes[1] = 45;
    vibes[2] = 56;
    vibes[3] = 89;
    cout<<"Vibes of B - "<<vibes[1]<<endl;
    cout<<"Vibes of C - "<<vibes[2]<<endl;
    cout<<"Vibes of D - "<<vibes[3]<<endl;

    cout<<"We can change the array value in between. For eg-"<<endl;
    vibes[3] = 69;
    cout<<"Vibes of D - "<<vibes[3];

    return 0;
}