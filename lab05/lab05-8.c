#include <stdio.h>
int main(){
    int n, i, j, head = 2, num = 1, count = 2;
    printf("Input number of stairs: ");
    scanf("%d", &n);

    printf("---- round 1 ----\n");
    while(1){
        for(i=n;i>0;i--){
            if(i==head){
                printf("|-O-|\n");
            }else if(head>n){
                printf("|-O-|\n|-^-|\n");
                for(j=2;j<n;j++){
                    printf("|---|\n");
                }
                break;
            }else if(i==head-1){
                printf("|-^-|\n");
            }else{
            printf("|---|\n");
            }
        }

        printf("Input step command: ");
        scanf("%d", &num);
        if(num == 0){
            return 0;
        }else if(head+num>=n){
            num = 0;
            head = n;
        }else if(head+num<=2){
            num = 0;
            head = 2;
        }else{
            head += num;
        }    
        printf("---- round %d ----\n", count);
        count += 1;
    }
}