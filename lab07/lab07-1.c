#include <stdio.h>

int main() {
    int i, j, an;
    char s[100];
    printf("String (without a space): ");
    for(i=0;i<100;i++){
        scanf("%c", &s[i]);
        if(s[i]=='\n'){break;}
    }
    
    for(j=0;j<i;j++){
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') {
            printf("%c ",s[j]);
            an++;
        }
    }
    if (an>=2){
        printf("\nThis string contains %d vowels.",an);
    }
    else{
        printf("\nThis string contains %d vowel.",an);
    }
}