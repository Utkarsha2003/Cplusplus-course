#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    if(age<18){
        cout<<"You cannot come to my party.";
    }
    else if(age==18){
        cout<<"You are a kid and You will get a kid pass to the party.";
    }
    else{
        cout<<"You can come to the party.";
    }
     return 0;
}