#include <stdio.h>
int main(){
    double num, ans, by = 1;
    printf("Enter n: ");
    scanf("%lf", &num);
    for(int i=1;i<=num;i++){
        if(i%2!=0){
            ans += 4/by;
            by += 2;
        }else{
            ans -= 4/by;
            by += 2;
        }
    }
    printf("%.10f", ans);
}