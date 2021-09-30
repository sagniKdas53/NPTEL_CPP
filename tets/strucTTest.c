#include <stdio.h>
#include <string.h>
struct StringStruct
{
    char *arr;
    int size;
};

typedef struct StringStruct str;

int main(int num, char **item)
{
    str arr[num];
    for (int i = 0; i < num; i++)
    {
        arr[i].arr=item[i];
        arr[i].size = strlen(arr[i].arr);
        //sizeof(arr[i].arr)/sizeof(arr[i].arr[0]);
    }
    for (int i = 0; i < num; i++)
        printf("%s :: %d\n", arr[i].arr, arr[i].size);
    return 0;
}

/* ./a.out sagnik das das sag
./a.out :: 7
sagnik :: 6
das :: 3
das :: 3
sag :: 3 */