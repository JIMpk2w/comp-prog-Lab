#include <stdio.h>

int charcount(char *s)
{
    int l = 0;
    while(s[l]!='\0'){
        l++;
    }
    return l;

}

void charweave(char *s,char *result)
{
    int ccount = charcount(s);
    for(int i=0;i<ccount*2;i++, result++){
        if(i%2==0){
            *result = s[i/2];
        }else{
            *result = s[ccount-1-(i/2)];
        }
    }
    *result = '\0';
}

int main()
{  char str[100],result[200];
   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}