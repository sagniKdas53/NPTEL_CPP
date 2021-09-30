#include <iostream>
using namespace std;
class classA
{
public:
    void printA() { cout << "Class A"; }
};
class classB : public classA
{ //LINE-1
public:
    void primtB() { cout << "Class B"; }
};
int main()
{
    classB b;
    b.printA();
    return 0;
}