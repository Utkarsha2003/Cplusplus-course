#include <iostream>
using namespace std;

int main(){
    int marks[] = {13, 24, 43, 35, 65};
    
    cout<<"Using For-Loop in Array -"<<endl;
    for (int i = 0; i < 5 ; i++)
    {
      cout<<"Marks of "<<i<<" is - "<<marks[i]<<endl;
    }
    
    cout<<"\nUsing While-Loop in Array -"<<endl;
    int i = 0;
    while (i < 5)
    {
        cout<<"Marks of "<<i<<" is - "<<marks[i]<<endl;
        i++;
    }

    cout<<"\nUsing Do-While-Loop in Array - "<<endl;
    int f = 0;
    do
    {
        cout<<"Marks of "<<f<<" is - "<<marks[f]<<endl;
        f++;
    } while (f < 5);
    
    
    return 0;
}