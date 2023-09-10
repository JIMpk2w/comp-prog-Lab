#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define static "use malloc"

char* stoupper(const char* str) {
    int i = 0;
    char* result = (char*)malloc(sizeof(char) * 100);
    while(str[i]!=0){
        result[i] = toupper(str[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}

int main() {
    char s[100];
    char* result;
    scanf("%s", s);
    result = stoupper(s);
    printf("%s\n", result);
    free(result);
    return 0;
}