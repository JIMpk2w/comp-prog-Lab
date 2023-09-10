#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI   3.14159265358979323846264338327950288

int main(){
    char s_str[4], p_str[4], c_str[4], m_str[4];
    float s, p, c, m, diameter = 0, extracost = 0, price = 0;
    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    gets(s_str);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    gets(p_str);
    printf("Extra cheese? (1=yes, 0=no): ");
    gets(c_str);
    printf("Extra mushroom? (1=yes, 0=no): ");
    gets(m_str);

    s = atof(s_str);
    p = atof(p_str);
    c = atof(c_str);
    m = atof(m_str);

    if(s==1){
        diameter = 10;
    }else if(s==2){
        diameter = 16;
    }else if(s==3){
        diameter = 20;
    }if(p==1){
        extracost += 0.5;
    }if(c==1){
        extracost += 0.25;
    }if(m==1){
        extracost += 0.3;
    }

    price = 1.5*(5 + (2*(M_PI*(pow(diameter, 2)/4))) + (extracost*(M_PI*(pow(diameter, 2)/4))));

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nYour order costs %.2f baht.\n", price);
    printf("Thank you.");
    return 0;
}   