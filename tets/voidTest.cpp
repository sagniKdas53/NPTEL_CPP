#include <iostream>
using namespace std;

class One
{
public:
    int a;
};

class Two
{
public:
    double d;
};

class Three : public One, public Two
{
public:
    int a;
    double d;
    void *reff;
};

class A
{
public:
    int dataA_;
};

class B : public A
{
public:
    int dataB_;
};

int main()
{
    /*One a;
    Two b;
    Three cases;
    a.a= 10;
    b.d = 100000;*/

    Three *reff;
    One *rf;
    Two *fr;

    //reff->a = 10;
    //reff->d = 100000;
    //reff->reff = rf;

    cout << reff << " " << rf << " " << fr << endl;
    // reff = rf;  not ok child cant accept parent

    rf = reff; // okey bcz parent can accept child
    fr = reff;
    cout << reff << " " << rf << " " << fr << endl;

    cout << reff->a << " " << reff->d << " " << rf->a << " " << fr->d << endl;

    A a;
    B b;

    a.dataA_ = 10;
    b.dataA_ = 20;
    b.dataB_ = 20;

    A *pa = &a;
    B *pb = &b;

    cout << pa->dataA_ << endl;                      // prints 2
    cout << pb->dataA_ << " " << pb->dataB_ << endl; // prints 3 5
    pa = &b;
    cout << pa->dataA_ << endl; // prints 3
    //cout << pa->dataB_ << endl;  ‘class A’ has no member named ‘dataB_’; did you mean ‘dataA_’?
    return 0;
}