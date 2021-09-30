#include <iostream>

using namespace std;

#define MAXVAL(X, Y) (X > Y ? X : Y)    // ++n1(4) > ++n2(5) ? ++n1(5) :++n2(6)

inline int maxval(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int n1 = 3, n2 = 4;
    cout << MAXVAL(++n1, ++n2) << " ";
    cout << endl << n1 << " " << n2 << endl;
    cout << maxval(++n1, ++n2) << " ";  //6,7
    return 0;
}

// ./a.out 6 7
