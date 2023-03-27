#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"\nTell me your age: "<<endl<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"\nYou are 18, Go PARTY!!!"<<endl;
        break;
    case 22:
        cout<<"\nYou are 22, go get a job."<<endl;
        break;
    case 2:
        cout<<"\nYou are 2, Did you change your diaper?"<<endl;
        break;
    default:
        cout<<"\nNo special case found."<<endl;
        break;
    }
    cout<<"\nDone with switch case";
    return 0;
}