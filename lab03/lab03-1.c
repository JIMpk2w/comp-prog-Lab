#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[10];
    int n, i;
    gets(n_str);
    n = atoi(n_str);
    for(i=n;i>=0;i--){
        printf("%d\n", i);
    }
}