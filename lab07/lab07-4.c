#include <stdio.h>
int main(){
    int l, n, ans;
    scanf("%d %d", &l, &n);

    char str[n+1][l+1];
    
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }

    for(int i=1;i<n;i++){
        int sameword = 0;
        for(int j=0;j<l;j++){
            if (str[i-1][j] != str[i][j]){ 
            sameword += 1;
            }
        }
        if(sameword > 2){
            ans = i - 1;
            break;
        }
        ans = i;
    }
    printf("%s", str[ans]);
    return 0;
}