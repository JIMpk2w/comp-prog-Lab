#include <stdio.h>
#include <stdlib.h>

// Do the count by your function
// count target in n
int count_target(int n, int target)
{
    int count = 0;
    while(n>0){
        int i = n%10;
        n = n/10;
        if(target == i){
            count += 1;
        }
    }
    return count;


}

int main() {
   char input_n[12], input_x[2];
   fgets(input_n, 12, stdin);
   fgets(input_x, 2, stdin);

   int n;
   int x, count;

   n = atoi(input_n);
   x = atoi(input_x);

   count = count_target(n, x);

   // Display output in separate cases
   //
   if (count <= 0) {
      printf("There is no \"%d\" in %d.\n", x, n);
   } else if (count == 1) {
      printf("There is only 1 \"%d\" in %d.\n", x, n);
   } else {
      printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
   }
   return 0;
}