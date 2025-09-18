#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    
    char ch = {'o'};
    char *pi = &ch;
    printf("a value:%d\n",a);
    printf("address of a value:%d\n",&a);
    printf("\n");
    
    printf("a value:%d\n",*p);
    printf("pointer address:%d\n",&p);
    printf("pointer address:%d\n",p);
    printf("\n");
    
    printf("Address of a value:%p\n",*p);
    printf("Address of pointer:%p\n",&p);
    printf("Address of pointer:%p\n",p);
    printf("Size of a value:%d\n",sizeof(*p));
    printf("Size of p address:%d\n",sizeof(p));
    printf("\n");
    printf("using char:\n");

    printf("Character:%c\n",ch);
    printf("Address of ch:%p\n",&ch);
    printf("\n");
    printf("Address of pointer:%p\n",&p);
    printf("Address of charchater:%p\n",p);
    printf("Value of char:%c\n",*p);
    printf("\n");
    printf("Size of p:%d\n",sizeof(pi));
    printf("Size of *p:%d\n",sizeof(*pi));
    
    return 0;
    
}
