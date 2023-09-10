#include <stdio.h>

double findAverage(char *filename)
{
    FILE *read;
    int number, count = 0;
    double total = 0;
    read = fopen(filename, "r");
    while (fscanf(read, "%d", &number) !=  EOF){
        total += number;
        count += 1;
    }
    fclose(read);
    return total / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}