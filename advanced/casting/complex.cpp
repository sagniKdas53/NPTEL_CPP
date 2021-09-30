#include <iostream>
using namespace std;

class complex
{
protected:
    int x, y;
    string rep;

public:
    complex(int xx, int yy) : x(xx), y(yy) {}
    complex(int xx) : x(xx), y(0) {}
    complex(complex *cp) : x(cp->x), y(cp->y) {}

    complex operator+(complex *cx)
    {
        complex res(this);
        res.x += cx->x;
        res.y += cx->y;
        return res;
    }

    friend ostream &operator<<(ostream &os, const complex &cx)
    {
        os << to_string(cx.x) << "+i" << to_string(cx.y) << endl;
        return os;
    }

    //string operator <<(){
    //    return show();
    //}
    string show()
    {
        rep = to_string(x) + "+i" + to_string(y);
        return rep;
    }
};

int main()
{
    complex n(12, 3);
    complex m(33, 4);
    complex d(m);
    cout << n.show() << endl
         << m.show() << endl
         << d.show() << endl
         << endl
         << "Now directly: " << endl;

    cout << n << m << d << endl;

    cout << (n + &m).show() << endl;
    return 0;
}