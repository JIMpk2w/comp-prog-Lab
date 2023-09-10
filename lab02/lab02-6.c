#include <stdio.h>

int main(){
    char asc;
    scanf("%c", &asc);

    if(asc>=48 && asc<=57){
        printf("Output: digit");
    }else if(asc>=65 && asc<=90){
        printf("Output: upper case");
    }else if(asc>=97 && asc<=122){
        printf("Output: upper case");
    }else{
        printf("Output: others");
    }
}