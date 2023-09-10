#include <stdio.h>

int main(){
    int x=1, y=0, z=32;
    float i=65;
    char a='A', b='a';
    if((b==a+z)&&(x>y)){
        printf("1T\n");
    }if((y==z)&&(!y)){
        printf("2T\n");
    }if((a/4==i/4)||(!z)){
        printf("3T\n");
    }if((z>=y)&&(a!=65)){
        printf("4T\n");
    }if((x*y)||(x)&&(z%5)){
        printf("5T\n");
    }if((b<i)||(z/2)){
        printf("6T\n");
    }
}