#include <iostream>
using namespace std;
template<class T1,class T2>
//LINE-1
class Adder
{
    T1 _n1;
    T2 _n2;

public:
    Adder(T1 n1, T2 n2) : _n1(n1), _n2(n2) {}
    T2 add() { return (T2)_n1 + _n2; }
};
int main()
{
    Adder<int, double> a(3.15, 3);
    cout << a.add();
    return 0;
}