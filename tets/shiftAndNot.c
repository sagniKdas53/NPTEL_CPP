#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    printf(" :: %u\n", n);
}

void binS(unsigned n, int sh)
{
    unsigned i;
    for (i = 1 << sh; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    printf(" :: %u\n", n);
}

int main()
{ /*
    unsigned int res,bes,pes,ffs;
    bin(64);
    res = (64 >>(2+1-2));
    bin(32);
    ffs = (1<<2);
    bin(ffs);
    bes = (~ffs);
    bin(bes);
    pes = res & bes;
    bin(pes);
    printf("%d & %d = %d\n\n\n",res,bes,pes);


    unsigned int d,e,f;
    bin(d);
    d = 64;
    bin(d);
    bin(~d);
    e = 4;
    bin(d^e);  // ^ (bitwise XOR) 
    bin((~d)^e);
    bin((~e)^d);
    bin((~e)^(~d));

    printf("\n\n\n");
    unsigned int test =128;
    bin(test);
    bin(test|2); // bit-wise or
    bin(test&2); // bit wise and
    bin(test^2); // bit wise xor

    printf("\n\nXOR test\n");
    binS(0^0,1);
    binS(1^0,1);
    binS(0^1,1);
    binS(1^1,1);

    printf("\n\nAND test\n");
    binS(0&0,1);
    binS(1&0,1);
    binS(0&1,1);
    binS(1&1,1);

    printf("\n\nOR test\n");
    binS(0|0,1);
    binS(1|0,1);
    binS(0|1,1);
    binS(1|1,1);
    


    printf("\n\nShift test\n");
    binS(256,8);
    binS(~256,8);

    int y;
    for (y = 0; y <= (1 << 9); y++)
    {
        binS(y, 8);
    }
    bin(--y);
    bin(1 << 9);
*/
    binS(4294967295,30);
    binS(4294967295,31);
    binS(4294967295,32);
    binS(4294967295,33);

    printf("\n%u\n",(1<<30));
    printf("%u\n",(1<<31));
    //printf("%u\n",(1<<32));  warning: left shift count >= width of type
    //printf("%u\n",(1<<33));  warning: left shift count >= width of type
    printf("%u\n",(unsigned)(1<<31));
    printf("%lu\n",(unsigned)(1<<31)); //warning: format ‘%lu’ expects argument of type ‘long unsigned int’, but argument 2 has type ‘unsigned int’
    printf("%lu\n",(long unsigned)(1<<31));
    printf("%d\n",(long)(1<<31));
    printf("%d\n",(1<<31));
    return 0;
}