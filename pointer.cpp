#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p; //Declearation
    p=&a; //Initialization
    cout<< a<<endl; //It will give the value of a
    cout<<&a<<endl; //It will give the adderss of a
    cout<<p<<endl; //It will give the adderss of a
    cout<<&p<<endl;//It will give the adderss of p
    cout<<*p;//Dereferancing It will give the value of a
    return 0;
}