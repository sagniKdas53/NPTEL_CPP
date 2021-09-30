#include <iostream>
using namespace std;
#include <string.h>

template <typename f>
class special
{
    f internal;

public:
    special() : internal(0) {}
    special(f out) : internal(out)
    {
        cout << "general constructor" << endl;
    }
    f raise() { return internal; }
};

// this is specialization
template <>
class special<int>
{
    int internal;

public:
    special() : internal(0) {}
    special(int out) : internal(out)
    {
        cout << "special constructor" << endl;
    }
    int raise() { return internal; }
};

int main()
{
    special<double> sp(12.0343);
    cout << sp.raise() << endl;
    special<int> spp(12);
    cout << spp.raise() << endl;

    special<string> s("twelve");
    cout << s.raise() << endl;
    return 0;
}