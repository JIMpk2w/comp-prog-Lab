#include <stdio.h>
#include <stdlib.h>
int main(){
    char i1[10], l1[10];
    int i, stik = 0, n = 0;
    float l;
    
    gets(i1);
    gets(l1);

    i = atoi(i1);
    l = atof(l1);
    
    //printf("%d %f\n", i, l);
    
    if(i>=9){
        n = 40.0;
        stik = 9;
        //printf("%d", n);
    }else if(i>=6){
        n = 30.0;
        stik = 6;
    }else if(i>=3){
        n = 20.0;
        stik = 3;
    }else if(i>=2){
        n = 15.0;
        stik = 2;
    }else if(i>=1){
        n = 10.0;
        stik = 1;
    }else{
        n = 0;
    }
    printf("You get %d percents discount.\n", n);
    printf("Total amount due is %0.2f Baht.\n", l - (l*n/100));
    printf("And you have %d stickers left.", i-stik);
}