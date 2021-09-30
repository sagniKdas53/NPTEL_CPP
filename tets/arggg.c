#include<stdio.h>

int main(int argc, char **argv)
{
    printf("%d\n", argv[argc]);

    for(int i =0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    
    /* According to the C standard 2011 section 5.1.2.2.1 paragraph 
    "argv[argc] shall be a null pointer." 
    If it is printed using %d then it will print 0.*/

    return 0;
}