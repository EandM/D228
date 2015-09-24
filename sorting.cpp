#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100000

void setArray(int array[])
{
	srand(time(NULL));

	for(int i = 0; i< SIZE;i++)
	{
		array[i] = rand()%100;		
	}
}


void printArray(int array[])
{
	for(int i = 0; i< SIZE;i++)
	{
		printf("%d ", array[i]);		
	}	
	printf("\n");
}

void sortArray(int array[])
{
	printf("\nAfter sorting: \n");
	for(int i = 0; i < SIZE - 1; i++)
	{
		for(int j = 0; j < SIZE - i - 1; j++ )
			{
				if(array[j+1] < array[j]){
					int tmp = array[j+1];
					array[j+1] = array[j];
					array[j] = tmp;
				}
			}
	}
}

int main()
{

	int *array = new int[SIZE];

	setArray(array);
	printArray(array);
	sortArray(array);
	printArray(array);
	
	delete []array;	
	return 0;
}
