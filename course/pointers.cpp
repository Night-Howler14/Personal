#include <iostream>
using namespace std;

int main(){
    int p;
    p=10;
    
    cout<<&p;

    int *i=&p;
    cout<<i<<endl;
    cout<<*i<<endl;


    int *q = i;

    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<&q<<endl;
    cout<<&p<<endl;
    cout<<&i;



}