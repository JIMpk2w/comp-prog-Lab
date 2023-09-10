#include <stdio.h>

int main(){
    int a=4, b=3, c, d, e;
    float f=2,g=5, h, i, j, k;

    c = f/b*f;             
    printf("%.2f\n", c);    /* c = ? */
    h = a++/(float)b;
    printf("%.2f\n", h);          /* h = ? */
    j = (float)c/h--;
    printf("%.2f\n", j);          /* j = ? */
    d = b*h/c;
    printf("%.2f\n", d);                 /* d = ? */
    i = d*f+h--;
    printf("%.2f\n", i);               /* i = ? */
    e = a*d++/i;
    printf("%.2f\n", e);               /* e = ? */
    k = (int)i*d/(float)a;
    printf("%.2f\n", k);

}