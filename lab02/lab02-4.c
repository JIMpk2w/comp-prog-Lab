#include <stdio.h>
#include <stdlib.h>
int main(){
    char mon_str[100];
    float mon, t, sala;

    gets(mon_str);
    mon = atof(mon_str);
    
    if(mon>300000){
        sala = 15000;
        mon = (mon-300000)*10/100;
        printf("%0.2f", mon+sala);
    }else if(mon>=0&&mon<=300000){
        t = mon*5/100;
        printf("%0.2f", t);
    }else{
        printf("Error: Salary must be greater or equal to 0");
    }
}