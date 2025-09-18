#include <stdio.h>
int main()
{
    char arr[5] = {'H','e','l','l','o'};
    char *p = arr;
    
    for(int i = 0; i < 5; i++)
    {
        printf("%c ",arr[i]);
    }
        arr[0] = 'l';
        printf("\n");
        for(int i = 0; i < 5; i++)
    {
        printf("%c ",arr[i]);
    }
    
    return 0;
    
}
