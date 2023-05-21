#include <iostream>
using namespace std;


// int sum(int p[],int size){
//     cout<<sizeof(p)<<endl;
//     return 0;
// }



int sum(int *p,int size){
    // cout<<sizeof(*p)<<endl;
    // return (*p);
    int sum=0;

    for(int i=0;i<size;i++){
        sum=sum+p[i];
    }

    return sum;
}
int main(){
    int a[2];
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    cout<<sizeof(a)<<endl;

    cout<<sum(a+1,4)<<endl;
   
    return 0;
}