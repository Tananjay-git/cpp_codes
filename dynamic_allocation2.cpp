#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size ";
    cin>>size;
    int *p= new int [size];


    //Before changine the size of array one should delete the existing array
    delete []p;

    
    cout<<"Enter the new size";
    cin>>size;
    p = new int [size];
    return 0;
}