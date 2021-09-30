#include <iostream>
using namespace std;
class Transport
{
public:
    virtual void fare() = 0;
};
class Bus : public Transport
{
    void fare() { cout << "Bus fare"; }
};
class Train : public Transport
{
};
class PublicBus : public Bus
{
public:
    void fare() { cout << "Public bus fare"; }
};
class PrivateBus : public Bus
{
public:
    void fare() { cout << "Private bus fare"; }
};
class Express : public Train
{
public:
    void fare() { cout << "Express train fare"; }
};
class Local : public Train
{
};

int main()
{
    //Transport tt;
    Bus b;
    ///Train t;
    //Local l;
    Express e;
    PrivateBus pb;
    PublicBus pib;
    cout << "Transport, Train , Local are abstract" << endl;
    return 0;
}
