#include <iostream>
using namespace std;
class Square
{
    int l;

public:
    Square(int _l) : l(_l) {}
    friend void print(Square);//LINE-L
};
void print(Square S)
{
    cout << S.l;
}
int main()
{
    Square t1(5);
    print(t1);
    return 0;
}