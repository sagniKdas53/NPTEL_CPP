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

int main()
{
    container<int> contInt(10);
    cout << contInt.result() << endl;
    container<double> contDouble(10);
    cout << contDouble.result() << endl;

    comparator<float> init(1,3);
    cout << init.larger() << endl;


    comparator<float> iniet(1,1);
    cout << iniet.larger() << endl;
    return 0;
}