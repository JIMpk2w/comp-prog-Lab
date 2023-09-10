#include <stdio.h>
#include <stdlib.h>
int main(){
    char a_str[10], b_str[10], c_str[10];
    int a, b, c;
    printf("Enter length of side A: ");
    gets(a_str);
    printf("Enter length of side B: ");
    gets(b_str);
    printf("Enter length of side C: ");
    gets(c_str);
    a = atoi(a_str);
    b = atoi(b_str);
    c = atoi(c_str);

    if((a+b<=c || a+c<=b || b+c<=a) || (a<=0||b<=0||c<=0)){
        printf("Triangle type is invalid.");
    }else if(a==b&&a==c&&b==c){
        printf("Triangle type is equilateral.");
    }else if(a!=b&&a!=c&&b!=c){
        printf("Triangle type is scalene.");
    }else{
        printf("Triangle type is isosceles.");
    }
}