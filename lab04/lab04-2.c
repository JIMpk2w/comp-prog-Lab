#include <stdio.h>
#include <stdlib.h>

int x;
int is_prime(int i){
    for(x=2;x<i;x++){
        if(i%x==0){
            return 0;
        }else{
            continue;
        }
    return 1;
    }
}

int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);
  for (i=2;i<=n;i++){
      if (is_prime(i)){
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}