#include <iostream>
using namespace std;
#include <string.h>

template <typename F>
class container
{
    F internal;

public:
    container(F d) : internal(d) {}
    F result()
    {
        return internal;
    }
    void container_empty();
};
template <typename F>
void container<F>::container_empty()
{
    internal = 0;
}

template <typename e>
class comparator
{
    e A, B;

public:
    comparator() : A(0), B(0) {}
    comparator(e inA, e inB) : A(inA), B(inB) {}
    e larger()
    {
        if (A > B)
            return A;
        else
            return B;
    }
};

template <typename s>
s typ(s inp)
{
    //os << inp << endl;
    return inp;
}
int main()
{

    cout << typ<int>(10) << endl;
    cout << typ<double>(10.0) << endl;

    cout << typ<float>(10.0) << endl;
    cout << typ<string>("ten") << endl;

    return 0;
}