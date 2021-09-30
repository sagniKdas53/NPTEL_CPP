#include <iostream>

void fun(char = 0, int = 0, double = 0.0);
double sum(double = 0, double = 0);

//void fun(char =0,int ,double =0.0);  does not work

//void fun(char n1,int n2 = 0,double n3);  does not work

//void fun(char n1 = 0,int n2 = 0,double n3 = 0.0);
void compute(int n1, int n2, int &n3, int *n4)
{
    // & -> Returns the address of a variable.
    // * -> Pointer to a variable.
    n3 = n1 + n2;
    *n4 = n1 * n2;
}
int main()
{
    int n1 = 10, n2 = 20, n3 = 0, n4 = 0;
    fun('1', 2, 3.0);
    printf("\n%f", sum(3.14f, 3.7f));
    compute(n1, n2, n3, &n4);
    printf("\n%d,%d", n3, n4);
    return 0;
}

void fun(char n1, int n2, double n3)
{
    printf("%c,%d,%f\n", n1, n2, n3);
}

double sum(double d1, double d2)
{
    return d1 + d2;
}
