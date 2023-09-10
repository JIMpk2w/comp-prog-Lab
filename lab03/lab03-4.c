#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    if(n<=1){
        return n;
    }
    return fibo(n-2) + fibo(n-1);

}

int main(){
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for(i=0;i<=n;i++){
        printf("F(%d) = %d\n", i, fibo(i));


    }
    return 0;
}