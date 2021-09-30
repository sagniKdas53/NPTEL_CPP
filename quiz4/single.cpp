#include <iostream>
using namespace std;

class singleton
{
    char c;
    static singleton *object; //LINE-1
    singleton(char x) : c(x) {}

public:
    static singleton* create(char x) //LINE-2
    { 
        if (!object)
            object = new singleton(x);
        return object;
    }
    void show();
};

// fill with appropriate initialization such that it satisfies the given test cases //LINE-3 
singleton *singleton::object = 0;  
/*We need to initalize the class pointer type
object here to zero so that it can be assigned later
assigning it to singleton::create(' '); will make it unchangable.
*/
void singleton::show()
{
    cout << c;
}

int main()
{
    char x, y;
    singleton *s1, *s2;
    cin >> x >> y;
    s1 = singleton::create(x);
    s2 = singleton::create(y);
    s1->show();
    s2->show();
    return 0;
}