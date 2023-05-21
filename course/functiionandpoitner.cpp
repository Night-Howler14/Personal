#include <iostream>
using namespace std;

void print(int * p){
    cout<<*p;
}

void incrementf(int * p){
    p=p+1;
}

void increment(int * p){
    (*p)++;
}

int main(){
    int i=10;
    int *p=&i;
    print(p);
    cout<<endl;
    cout<<p<<endl;
    incrementf(p);
    cout<<p<<endl;
    increment(p);
    // cout<<i<endl;



    cout<<i;







    return 0;
}