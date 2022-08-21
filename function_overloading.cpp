#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}

int add(int x,int y,int z){
    return x+y+z;
}

float add(float x,float y){
    return x+y;
}

int main(){
    int a=10,b=30,c=90,d;
    float i=2.4f,j=3.4f;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(i,j)<<endl;
    return 0;
}