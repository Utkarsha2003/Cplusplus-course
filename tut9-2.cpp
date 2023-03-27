#include <iostream>

using namespace std;
int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You can not come to my party.";
    }
    else if(age==18){
        cout<<"You are a kid and You wil get a kid pass to the party.";
    }
    else if(age<1){
        cout<<"You are not born yet.";
    }
    else{
        cout<<"You can come to the party.";
    }
    return 0;
}