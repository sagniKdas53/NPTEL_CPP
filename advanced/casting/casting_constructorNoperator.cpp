#include <iostream>
using namespace std;
#include <string.h>

struct stu
{
    int st_i;
    float st_f;
};
class Test
{
public:
    int i;
    string ss;
    float fu;
    struct stu stu;

    Test(int x) : i(x)
    {
        cout << "casting constructor for int" << endl;
    }
    Test(string x) : ss(move(x))
    {
        cout << "casting constructor for string" << endl;
    } // std::move is used to assign strings
    Test(float x) : fu(x)
    {
        cout << "casting constructor for float" << endl;
    }

    Test(int x, string xx, float ff) : fu(ff), i(x), ss(move(xx))
    {
        cout << "casting constructor for int and string" << endl;
    }
    operator string()
    {
        cout << "casting function for string" << endl;
        return ss;
    }
    double operator+(double inp)
    {
        cout << "casting function for integer" << endl;
        return fu + inp;
    }
    void assignStuff()
    {
        stu.st_f = fu;
        stu.st_i = i;
        showStuff();
    }
    void showStuff()
    {
        cout << stu.st_f << endl;
        cout << stu.st_i << endl;
    }
    void showStr()
    {
        cout << ss << endl;
    }
};
int main()
{
    Test test("this is a string");
    Test test2(11);
    cout << test2.ss << endl
         << test2.i << endl;
    string st = test;
    test = 32;

    string sss = "this is also a string";
    test2 = sss;
    test2.assignStuff();
    cout << test2.ss << endl
         << test2.i << endl;

    cout << endl
         << "Now to actual proper casting" << endl
         << "the static_cast<type_name> is same as implicit casting"
         << endl
         << endl;
    float fnum = 112.3;
    Test test3(fnum);
    cout << test3.fu << endl;
    string ree = static_cast<string>(test3);
    cout << ree << endl
         << test3.ss << endl;

    test3 = static_cast<float>(33.33);
    cout << test3.fu << endl;

    Test test5(fnum);
    cout << test5 + 44.43 << endl
         << endl;
    string sh = "twelve";
    Test tets4(12, sh, static_cast<float>(234.234));
    tets4.assignStuff();
    tets4.showStr();
    Test test6(sh);
    cout << endl
         << test6.ss << endl
         << test6.fu << endl
         << test6 + 44.43 << endl
         << endl;

    return 9;
}