#include <iostream>
using namespace std;
int main(){
    int b=6;
    int i=1;
    cout<<"1) USING FOR-LOOP METHOD:"<<endl;
    for(int i=1; 1<=10; i++)
    {
        cout<<b<<" x "<<i<<" = "<<i*b<<endl;
    }
    cout<<"\n2) NOW USING WHILE-LOOP METHOD:"<<endl;
    while(i<=10){
        cout<<b<<" x "<<i<<" = "<<i*b<<endl;
        i++;
    }
    return 0;
}