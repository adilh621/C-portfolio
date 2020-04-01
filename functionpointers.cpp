#include <iostream>
using namespace std;

/*

Below consists of various simple functions that return various 
data types and accepts various data types as well. This sample 
code demonstrates use of function pointers.

adil hussain 04/01/2020

*/


void function1(){
    cout<<"hello world"<<endl;
}


int function2(int a, int b, int c){
    int sum =a+b+c;
    cout<<sum<<endl;
    return 0;
}

void function3(int x){
    if(x < 10){
        cout << "try again"<<endl;
    }else{
        cout<<"thank you"<<endl;
    }
}

int main() {

typedef void (*funcptr)();

funcptr xx=function1;
xx();

typedef int (*funcptr2)(int,int,int);
funcptr2 yy=function2;
yy(20,30,40);

int x;
cout<<"enter a number"<<endl;
cin >> x;

typedef void(*funcptr3)(int);
funcptr3 cc = function3;
cc(x); 


  return 0;
}
