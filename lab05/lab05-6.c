#include <stdio.h>
int main()
{
    int i, a[5],b[5],c[10] ;
    printf("Enter array a:\n");
    for(i = 0;i<5;i++){
        printf("Please enter an integer: ");
        scanf ("%d",&a[i]);
    }
    printf("Enter array b:\n");
    for(i = 0;i<5;i++){
        printf("Please enter an integer: ");
        scanf ("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        c[i] = a[i];
    }
    for(i=5;i<10;i++){
        c[i] = b[i-5];
    }
    printf ("Array c: ");
    for (i=0;i<10;i++)
        printf ("%d ",c[i]);
    printf ("\n");
    return 0;
}