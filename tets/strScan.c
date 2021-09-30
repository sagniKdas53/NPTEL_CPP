#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StringStruct
{
    char *arr;
    int size;
};

typedef struct StringStruct str;

int main()
{
    int num;
    scanf("%d", &num);
    str arr[num];
    char *string;// pointer used to scan no & nedded
    for (int i = 0; i < num; i++)
    {
        scanf("%s", string);
        //printf("%s",string);
        arr[i].arr = (char *)malloc(sizeof(char) * strlen(string));
        strcpy(arr[i].arr, string);
        arr[i].size = strlen(string);
    }
    for (int i = 0; i < num; i++)
        printf("%s :: %d\n", arr[i].arr, arr[i].size);
    return 0;
}

/* */