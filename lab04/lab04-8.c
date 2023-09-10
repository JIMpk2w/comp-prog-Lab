#include <stdio.h>
long binary(long x){
    if(x==0){
    return 0;
    }else{
      return (x % 2) + (binary(x / 2) * 10);
    }
}
    
int main() {
    long x, i;
    scanf("%ld", &x);
    i = binary(x);

    printf("%ld", i);
}