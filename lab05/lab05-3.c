#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[4], i_str[10], cal_str[10];
    float i, cal;

    printf("Initial Value: ");
    gets(i_str);
    i = atof(i_str);
    printf("\n");

    while(1){
        printf("Operator: ");
        gets(input);
        if(strcmp(input, "@") == 0){
            printf("\n");
            break;
        }else if(strcmp(input, "+") == 0){
            printf("Input Value: ");
            gets(cal_str);
            cal = atof(cal_str);
            i += cal;
            printf("Present Value is %.4f\n", i);
            printf("\n");
        }else if(strcmp(input, "-") == 0){
            printf("Input Value: ");
            gets(cal_str);
            cal = atof(cal_str);
            i -= cal;
            printf("Present Value is %.4f\n", i);
            printf("\n");
        }else if(strcmp(input, "*") == 0){
            printf("Input Value: ");
            gets(cal_str);
            cal = atof(cal_str);
            i *= cal;
            printf("Present Value is %.4f\n", i);
            printf("\n");
        }else if(strcmp(input, "/") == 0){
            printf("Input Value: ");
            gets(cal_str);
            cal = atof(cal_str);
            i /= cal;
            printf("Present Value is %.4f\n", i);
            printf("\n");
        }else{
            printf("\n");
            break;
        }
    }
    printf("Finish Calculation. Final Value is %.4f", i);
}