#include<iostream>
using namespace std;

class Base{
protected:
    int a, b;
    public:
        Base(int _a, int _b) : a(_a), b(_b) {}
        int add() { return (a+b); }
};

class Derived1 : public Base{
    public:
        Derived1(int _x);
};

class Derived2 : public Base{
    public:
        Derived2(int _x);
        int add() { return (a+b+b);	}
};

class Derived3 : public Base{
    int c;
    public:
        Derived3(int _x, int _y, int _z);
        int add() { return (a+b+c);	}
};
Derived1::Derived1(int _x) : Base(_x,_x) {}    //LINE-1

Derived2::Derived2(int _x) : Base(_x,_x) {}    //LINE-2

Derived3::Derived3(int _x, int _y, int _z) : Base(_x,_y),c(_z) {}    //LINE-3

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == 1){
        Base *b1 = new Base(b,c);
        cout << b1->add();
    }
    else if(a == 2){
        Derived1 *d1 = new Derived1(b);
        cout << d1->add();
    }
    else if(a == 3){
        Derived2 *d2 = new Derived2(b);
        cout << d2->add();
    }
    else if(a == 4){
        Derived3 *d3 = new Derived3(b,c,d);
        cout << d3->add();
    }
    return 0;
}