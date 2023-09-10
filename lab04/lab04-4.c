#include <stdio.h>
#include <stdlib.h>

int main(){
    char i_str[10], l_str[10];
    int i, l, n, m, space, cun;
    gets(i_str);
    gets(l_str);

    i = atoi(i_str);
    l = atoi(l_str);

    for(n=0;n<l;n++){
        
        for(cun=0;cun<n;cun++){
            printf(" ");
        }

        if(n==0||n==l-1){
            for(m=0;m<i;m++){
                printf("*");
            }
            
            printf("\n");

        }else{
            printf("*");
            for(space=1;space<i-1;space++){
                printf(" ");
            }

            printf("*\n");
        }
    }
}