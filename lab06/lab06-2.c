#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[7], y[3];
    int n, x;
    float grade[20], credit[20], up = 0, down = 0;
    
    printf("Enter number of subject(s): ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Enter credit,grade for subject #%d: ", i+1);
        scanf("%s", &s);

        char* g = strtok(s, ",");
        x = atoi(g);
        credit[i] = x;

        g = strtok(NULL, " ");

        if(strcmp(g, "a")==0||strcmp(g, "A")==0){
            grade[i] = 4.00;
        }else if(strcmp(g, "b")==0||strcmp(g, "B")==0){
            grade[i] = 3.00;
        }else if(strcmp(g, "c")==0||strcmp(g, "C")==0){
            grade[i] = 2.00;
        }else if(strcmp(g, "d")==0||strcmp(g, "D")==0){
            grade[i] = 1.00;
        }else if(strcmp(g, "f")==0||strcmp(g, "F")==0){
            grade[i] = 0.00;
        }
       
    }
    for(int i=0;i<n;i++){
        up += credit[i]*grade[i];
        down += credit[i];        
    }
    printf("GPA = %.2f", up/down);
    
}