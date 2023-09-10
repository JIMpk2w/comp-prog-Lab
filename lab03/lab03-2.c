#include <stdio.h>
#include <stdlib.h>
int main(){
    char n_str[200], m_str[200];
    long long i = 2, n, m, gcd = 1;
    gets(n_str);
    gets(m_str);
    n = atoll(n_str);
    m = atoll(m_str);
    
    while(i<=n+m){
        if(n%i==0&&m%i==0){
            gcd *= i;
            n /= i;
            m /= i;
        }else{
            i++;
        }
    }

    printf("GCD: %d\n", gcd);   
    printf("LCM: %llu", n*m*gcd);
    
    return 0;
}