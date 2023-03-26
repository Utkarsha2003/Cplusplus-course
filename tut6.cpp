//there are two types of header files
// 1. system header files: comes with the compiler
#include<iostream>
// 2. user defined header files: it is written by the programmer
// #include "user defined header file" 
//this will produce an error if the file is not present in the current directory 
using namespace std;

int main(){
int a=4, b=5;

cout<<"arithematic operators in c++\n";
// arithmetic operators
cout<<"the value of a + b is "<<a+b;
cout<<"\nthe value of a - b is "<<a-b;
cout<<"\nthe value of a * b is "<<a*b;
cout<<"\nthe value of a / b is "<<a/b;
cout<<"\nthe value of a % b is "<<a%b<<endl;
cout<<"the value of a ++ is "<<a++<<endl;
cout<<"the value of a -- is "<<a--<<endl;
cout<<"the value of ++a is "<<++a;
cout<<"\nthe value of --a is "<<--a<<endl;

// Assignment operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='m';

//Comparison operators --> 
cout<<"\ncomparison operators in c++\n";
cout<<"The value of a == b is "<<(a==b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<"The value of a < b is "<<(a<b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;

//Logical operators --> 
cout<<"\nLogical operators in c++\n";
cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}