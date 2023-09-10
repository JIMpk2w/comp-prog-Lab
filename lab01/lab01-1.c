#include<stdio.h>
int main() {
    int computer_time = 785;
    int d = computer_time / (60*24);
    int h = (computer_time / 60) - (d*24);
    int m = computer_time % 60;

    printf("It is %d days %d hours and %d minutes.", d, h, m);
    return 0;
}