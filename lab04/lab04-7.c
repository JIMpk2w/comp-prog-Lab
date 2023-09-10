#include <stdio.h>
#include <stdlib.h>

int main(){
    char i_str[10];
    int i, n, m, n1, m1;
    gets(i_str);

    i = atoi(i_str);

    for(n=1;n<i;n++){
        for(m=1;m<=n;m++){
        printf("*");
        }
        printf("\n");
    }

    for(n1=i;n1>0;n1--){
        for(m1=1;m1<=n1;m1++){
            printf("*");
        }
        printf("\n");
    }
}
