#include <iostream>
using namespace std;

class counter{
    private: 
    int count;

    public:
    counter(){  //constructor 
        count = 0;
    }

    void inc_count(){
        count++;
    }
    int get_count(){
        return count;
    }
};

int main(){
    counter c1 ;

    cout << c1.get_count() << endl;
    
    c1.inc_count();

    cout << c1.get_count() << endl;

    return 0;
}