#include <iostream>
using namespace std;
class Data
{

public:
    Data(int _i = 0) : i(_i) { cout << "Data::Data():" << i << " "; }

    ~Data() { cout << "Data::~Data():" << i << " "; };

private:
    int i;
};
Data *dp2;
void func()
{
    dp2 = new Data(1); //LINE-1
}
int main()
{
    Data *dp1; //LINE-2
    {
        func();

        Data di(2); //LINE-4
    }               //LINE-5
    Data d2(3);     //LINE-6
    delete dp2;     //LINE-T
    return 0;
}