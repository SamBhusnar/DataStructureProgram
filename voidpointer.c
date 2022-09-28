#include <stdio.h>
int main()
{
    int s = 4;
    float a = 4.4;
    char p = 's';
    float d = 4.3;
    int ca = 4444;
    int go = 432;
    int goo = 321;
    void *ptr;
    ptr = &a;
    printf("The void pointer is :%d\n", ((float *)ptr));
    ptr = &s;
    printf("The void pointer is :%d\n", ((int *)ptr));
    ptr = &p;
    printf("The void pointer is :%d\n", ((char *)ptr));
    ptr = &d;
    printf("The void pointer is :%d\n", ((float *)ptr));
    ptr = &ca;
    printf("The void pointer is :%d\n", ((int *)ptr));
    ptr = &go;
    printf("The void pointer is :%d\n", ((int *)ptr));
    ptr = &goo;
    printf("The void pointer is :%d\n", ((int *)ptr));
    printf("The value of pointer is  %d\n",&goo);
    printf("The value of pointer is  %d\n", ptr);
    return 0;
}