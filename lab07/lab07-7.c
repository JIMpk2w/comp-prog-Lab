#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int n = 0, in = 0, out = 0;
    while(input[n]!='\0'){
        n++;
    }

    for(int i=0;i<n;i++){
        if(input[i] == 'I' || input[i] == 'V' || input[i] == 'X'){
            if(input[i] == 'I' && (input[i+1] != 'V' )){
                in += 1;
                out += 1;
            }else if(input[i] == 'I'){
                in -= 1;
                out += 1;
            }else if(input[i] == 'V'){
                in += 5;
                out += 1;
            }else if(input[i] == 'X'){
                in += 8;
                out += 1;
            }if(input[i+1] != 'I' && input[i+1] != 'V' && input[i+1] != 'X'){
                out -= 1;
                char add = in + 48;
                output[i - out] = add;
                in = 0;
            }
        }else{
            output[i - out] = input[i];
        }
    }
    output[n - out] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}