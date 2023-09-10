#include <stdio.h>

int main(){
    int i, space, minus, asc, minus2, asc2 ;
    scanf("%d", &i);

    if(i<=0||i>26){
        printf("-");
    }else{
    for(space=i;space>0;space--){
        for(minus=2*space-2;minus>0;minus--){
            printf("-");    
        }
        for(asc=96+i;asc>=96+space;asc--){
            if(asc==96+space){
                printf("%c", asc);
            }else{
                printf("%c-", asc);
            }
        }
        for(asc2=97+space;asc2<=96+i;asc2++){
            printf("-%c", asc2);
        }
        for(minus2=1;minus2<=2*space-2;minus2++){
            printf("-");
        }
        printf("\n");
    }

    int space_un, minus_un, minus_un2, asc_un, asc_un2;
    for(space_un=2;space_un<=i;space_un++){
        for(minus_un=2*space_un-2;minus_un>0;minus_un--){
            printf("-");    
        }
        for(asc_un=96+i;asc_un>=96+space_un;asc_un--){
            if(asc_un==96+space_un){
                printf("%c", asc_un);
            }else{
                printf("%c-", asc_un);
            }
        }
        for(asc_un2=97+space_un;asc_un2<=96+i;asc_un2++){
            printf("-%c", asc_un2);
        }
        for(minus_un2=1;minus_un2<=2*space_un-2;minus_un2++){
            printf("-");
        }
        printf("\n");
    }
    }
}