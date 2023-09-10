#include <stdio.h>

int main(){
    int a[10] = {0, 1}, *ptr;
    int  k;
    ptr  =  a+2;
    for(k=2; k<10; k++)
        a[k] = a[k-1]+a[k-2];
    printf("%p\n", *ptr);
    printf("%p\n", *(ptr+1));
    printf("%p\n", ptr);
    printf("%p\n", ptr[3]);
    printf("%p\n", ptr[-1]);
    printf("%p\n", &a[4]);
    printf("%p\n", *(ptr+2));
    printf("%p\n", ptr+3);
    printf("%p\n", &ptr[3]);
    printf("%p\n", ptr[5]);
}