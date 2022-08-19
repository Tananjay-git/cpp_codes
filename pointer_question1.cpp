// Write a program to calculate average of all elements in an array

#include<iostream>
using namespace std;

int main(){
    int size,sum=0;
    float avg;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int *arr = new int[size];
    cout<<"Enter the element"<<endl;
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    cout<<"Element of array is : "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }

    sum = arr[0];
    for(int i=1 ; i<size ; i++){
        sum = sum+arr[i];
        avg = sum/size;
    }
    cout<<"Average of Element of array is :";
    cout<<avg;

    delete []arr;
    arr = NULL;
    return 0;
}