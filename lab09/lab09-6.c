#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = 
    ((x >> 7) & 1) + ((x >> 6) & 1) + ((x >> 5) & 1) + ((x >> 4) & 1)
    + ((x >> 3) & 1) + ((x >> 2) & 1) + ((x >> 1) & 1) + (x & 1);


    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}