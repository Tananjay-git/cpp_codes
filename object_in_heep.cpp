#include <iostream>
using namespace std;

class rectangle{
    public:
    int length ,breadth;

    int area(){
        return length*breadth;
    }
};


int main(){

    rectangle *p = new rectangle();

    cin >> p->length;
    cin >> p->breadth;

    cout << p->area();
    return 0 ;
}