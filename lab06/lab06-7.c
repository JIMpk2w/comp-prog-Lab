#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];

	// initialize array numbers from 1 to num by numbersPtr
	for (i=1;i<=num;i++, numbersPtr++) {
	   *numbersPtr = i;
	}

	// loop through count
	for (i=0;i<count;i++) {
		scanf("%d", &target);
		removeTarget(&numbers[0], num, target);
    }

	numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
	for (i=0;i<num;i++, numbersPtr++) {
	       printf("%d ", *numbersPtr);
	}
	puts("");
	return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{
    for(int x=0;x<size;x++){
		if(array[x] == target){
			for(int y=x;y<size;y++){
				if(y==size-1){
					array[y] = 0;
				}else{
					array[y] = array[y+1];
				}
			}
			break;
		}
	}
}