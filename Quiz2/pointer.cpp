#include <iostream>
#define PTR point
#define MIN(a,b) ((a)<(b)?(a):(b))    
int pointer_to(){
    int PTR = 0;
    int *pointer = &PTR;
    printf("%d", PTR);
    *pointer = 1;
    printf("%d", PTR);
    point = 0;
    printf("%d", PTR);
    return 0;
}
int main()
{
    int point = 1;
    int *pointer = &point;
    printf("%d", point);
    *pointer = 0;
    printf("%d", point);
    point = 1;
    printf("%d\n", point);
    pointer_to();
    printf("\n%s:%s\n", __DATE__,__TIME__);

    printf("\n");
    printf("%d",MIN(MIN(4,7),MIN(5,9)));
    return 0;
}