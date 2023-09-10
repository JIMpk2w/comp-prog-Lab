#include <stdio.h>

int main(){
    float i, n, collected = 0;
    int count = 0;

    printf("Enter your goal amount: ");
    scanf("%f", &i);

    while(i>0){
        printf("Enter money collected today: ");
        scanf("%f", &n);
        i -= n;
        count += 1;
        collected += n;
        if(i>0){
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count, collected, i);
        }else{
            if(count==1){
                printf("Congratulations! You take %d day to reach your goal.", count);
            }else{
                printf("Congratulations! You take %d days to reach your goal.", count);
            }
        }
    }
}