#include<iostream>
using namespace std;

int main(){
    int a[5]={2,4,6,8,10};
    int *p=a;
    cout<<*p<<endl;//it givr the first element of the array "2"
    p++;
    cout<<*p<<endl;//it give the second element of array "4"
    p--;
    cout<<*p<<endl;//it give the first element of the array "2"
    cout<<p<<endl;//it give address of first element of the array "2"
    cout<<p+2<<endl;//it givr address of third element of the array "6"
    for(int i=0; i<5; i++){
        // cout<<*(a+i)<<endl;
        // cout<<*(p+i)<<endl;
        // cout<<p[i]<<endl;
        cout<<*p<<endl;
        p++;
    }
    
    return 0;

}