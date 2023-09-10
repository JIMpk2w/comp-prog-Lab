#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char i[10];
    int h, m;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    gets(i);

    char* pa = strtok(i, ":");
    char* h_str = pa;
    h = atoi(h_str);
    
    pa = strtok(NULL, " ");
    char* m_str = pa;
    m = atoi(m_str);

    pa = strtok(NULL, " ");

    if((strcmp(pa, "pm")==0)||(strcmp(pa, "PM")==0)&&m<60){
        if(h<12&&h+12!=0){
            printf("Equivalent 24-hour time: %02d:%02d", h+12, m);
        }else{
            printf("Equivalent 24-hour time: %02d:%02d", h, m);
        }
    }else if((strcmp(pa, "AM")==0)||(strcmp(pa, "am")==0)&&m<60){
        if(h!=12){
            printf("Equivalent 24-hour time: %02d:%02d", h, m);
        }else{
            printf("Equivalent 24-hour time: %02d:%02d", h-12, m);
        }    
    }
    return 0;
    
}