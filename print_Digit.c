// Accept no from user and print all the digits from 1 to that no

#include<stdio.h>

//function declaration
void printDigit(int);

//entry point function
int main()
{
	int iNo = 0;
	printf("Enter one no  \n");
	scanf("%d",&iNo);
	
	printDigit(iNo);
	
	return 0;
}

//this function contains actual logic
void printDigit(int iNo)
{
	int i = 0;
	printf("=====================\n");
	for(i = 1; i<=iNo ; i++)
	{
		printf("%d\n",i);
	}
}



