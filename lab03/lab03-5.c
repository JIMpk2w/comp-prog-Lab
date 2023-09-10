#include <stdio.h>

int main(){
    int s, i;
    scanf("%d", &s);

    if(s<=0||s>26){
        printf("-");
    }else if(s<=26){
        for(i=96+s;i>97;i--){
            printf("%c-", i);
        }

        printf("a");

        for(i=98;i<=96+s;i++){
            printf("-%c", i);
        }
    }
}