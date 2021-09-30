#include<iostream>
#define PI 3.14
using namespace std;

class Area{
    public:
        double getVal(int r){ return (PI*r*r);	}
};

class Perimeter{
    public:
        double getVal(int r){ return (2*PI*r); }
};
class Circle : public Area, public Perimeter{    //LINE-1
    int r;
    public:
        Circle(int _r) : r(_r){	}
        double getArea(){ return Area::getVal(r); }    //LINE-2
        
        double getPerimeter(){ return Perimeter::getVal(r); }    //LINE-3
};
int main(){
    int a;
    cin >> a;
    Circle c(a);
    cout << c.getArea() << ", " << c.getPerimeter();
    return 0;
}