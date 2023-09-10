#include <stdio.h>
#include <stdlib.h>
int main(){
    char n_str[11];
    long long n, n1, i = 10;

    printf("Input n = ");
    gets(n_str);
    
    n = atoll(n_str);
    n1 = n * n;

    printf("n^2 = %llu\n", n1);

    while(n1){
        if(n1%i == n){
            printf("Yes. %d is automorphic number.", n);
            break;
        }else if(n1/i <= 0){
            printf("No. %d is not automorphic number.", n);
            break;
        }
        i *= 10; 
    }
    return 0;
}