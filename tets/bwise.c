#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    printf(" :: %u", n);
    printf(" :: %c\n",(char)n);
}

int main()
{
    char c=48;
    char str[6];
    //bin(c);
    int i, mask=01;
    for(i=1; i<=5; i++)
    {
        //printf("%d %c %d\n", c|mask,c|mask,mask);
        bin(c|mask);
        str[i] = (char)(c|mask);
        mask = mask<<1;
    }
    str[i]='\0';
    //bin(mask);
    printf("\n%s\n",str);
    return 0;
}

//original result : 12480