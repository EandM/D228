#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100 

void setArray(int array[])
{
	srand(time(NULL));

	for(int i = 0; i<100;i++)
	{
		array[i] = rand()%100;		
	}
}


void printArray(int array[])
{
	for(int i = 0; i<100;i++)
	{
		printf("%d ", array[i]);		
	}	
	printf("\n");
}

int main()
{

	int *array = new int[SIZE];

	setArray(array);
	printArray(array);

	/*
	for()

	for(int = 0; i < 4; i++)
	{
		if(fork())
		{
			
		}
	}
	*/
	
	delete []array;	
	return 0;
}
