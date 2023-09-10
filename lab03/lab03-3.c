#include <stdio.h>
#include <stdlib.h>

int main(){
    char n1_str[10], n2_str[10];
    int i = 2, n1, n2;
    gets(n1_str);
    gets(n2_str);
    n1 = atoi(n1_str);
    n2 = atoi(n2_str);
    while(i<=n1+n2){
        if(n1%i==0&&n2%i==0){
            n1 /= i;
            n2 /= i;
        }else{
            i++;
        }
    }
    if(n2==1){
        printf("= %d", n1);
    }else{
        printf("= %d/%d", n1, n2);
    }
}