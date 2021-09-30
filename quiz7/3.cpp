#include <iostream>
using namespace std;
class employee
{
    int emp_id;
    string name;

public:
    employee(int _emp_id, string _name) : emp_id(_emp_id), name(_name) {}
    void update(string na) const
    {
        reinterpret_cast<employee *>(this)->name = na;
    }
    void showInfo() const
    {
        cout << emp_id << " : " << name;
    }
};
int main(void)
{
    const employee e(3, "Rajat");
    e.update("Ram");
    e.showInfo();
    return 0;
}