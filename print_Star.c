// Write a program which prints five star on screen
#include<stdio.h>
//function declaration
void printStar(int);

//entry point function
int main()
{
	int iNo = 0;
	printf("Enter how many start you want to print  \n");
	scanf("%d",&iNo);
	
	printStar(iNo);
	
	return 0;
}

//this function contains actual logic
void printStar(int iNo)
{
	int i = 0;
	printf("\n");
	for(i=0 ; i < iNo ; i++)
	{
		printf(" * ");
	}
}