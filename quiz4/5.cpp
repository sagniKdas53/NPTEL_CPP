#include <iostream>
using namespace std;
class Singleton
{
    int data;
    static Singleton *ins;
    Singleton(int i) : data(i) {}

public:
    int get() { return data; }
    static Singleton* createIns(int i)
    {
        if (!ins)
            ins = new Singleton(i);
        return ins;
    }
    ~Singleton() { cout << data; }
};
Singleton *Singleton::ins = 0;
void fun()
{
    Singleton *s = Singleton::createIns(1);
    cout << s->get();
}
int main()
{
    Singleton *s = Singleton::createIns(0);
    cout << s->get();
    fun();
    return 0;
}