#include <iostream>
using namespace std;

class rectangle{
    public:
    int length,breadth;
        rectangle(int l,int b);
        int area();
        int perimeter();
};
class cuboid : public rectangle{
    int height;
    public:
        int set_height(int h){
            height=h;
        }
        int volume(){
            return length*breadth*height;
        }
};
int main(){
    int lenght,breadth,heigth;
    cout<<"Enter Length : ";
    cin>>lenght;
    cout<<"\nEnter Breadth : ";
    cin>>breadth;
    cout<<"\nEnter Height : ";
    cin>>heigth;
    cuboid cb;
    rectangle r(lenght,breadth);
    cb.set_height(heigth);
    cb.area();
    cb.perimeter();
    cout<<"Volume : "<<cb.volume()<<endl;

}

rectangle :: rectangle(int l, int b){
    length = l;
    breadth = b;
}

// cuboid :: cuboid(int h){
//     height = h;
// }
int rectangle :: area(){
    cout<<"Area : "<<length*breadth<<endl;
    return 0;
}
int rectangle :: perimeter(){
    cout<<"Perimeter : "<<2*(length*breadth)<<endl;
    return 0;
}
