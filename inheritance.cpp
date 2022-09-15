#include <iostream>
using namespace std;

class base{
    public:
    int x;
        void show(){
            cout<<"x is in base class : "<<x<<endl;
        }
};
class derive : public base{
    public:
    int y;
        void display(){
            cout<<"y is in derive class : "<<y<<endl;
            cout<<"x is in derive class : "<<x<<endl;
            
        }
};
int main(){
    base b;
    derive d;
    b.x= 10;
    b.show();
    d.x=30;
    d.y=90;
    d.display();
}