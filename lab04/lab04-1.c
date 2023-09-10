#include <stdio.h>
#include <stdlib.h>
int main(){
    char a_str[10];
    int x, a;

    gets(a_str);
    a = atoi(a_str);

    printf("Binary number of %d is ", a);

    for(x=3;x>=0;x--){
        printf("%d",(a>>x) % 2);
    }
    printf(".");
}