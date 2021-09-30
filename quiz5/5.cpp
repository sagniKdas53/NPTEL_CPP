#include <iostream>
using namespace std;
class One
{
public:
    One() { cout << "1 made, "; }
    ~One() { cout << "1 destroyed ,"; }
};
class Two : public One
{
public:
    Two() { cout << "2 made, "; }
    ~Two() { cout << "2 destroyed, "; }
};
class Three : public Two
{
public:
    Three() { cout << "3 made, "; }
~Three(){ cout << "3 destroyed, "; }
};
void fun(Two t){
    int c = 4;
}
int main()
{
    cout << "Init" << endl;
    Three t; //LINE-1
    cout << "Before function call" << endl;
    fun(t);  //LINE-2
    cout << "After function call" << endl;
    return 0;
}