#include <stdio.h>
#include <math.h>

int main(){
    int n, i, j;
    double pe;
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        for(j=i+1;j<=n;j++){
            pe = (i*i) + (j*j);
            if(sqrt(pe) == n-(i+j)){
                printf("(%d, %d, %.0f)", i, j, sqrt(pe));
                return 0;
            }
        }
    }
    printf("No triple found.");
}