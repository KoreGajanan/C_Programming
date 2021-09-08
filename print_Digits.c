//write a program which prints digits on screen from 1 to 7

#include<stdio.h>
//function declaration
void printDigits();

//entry point function
int main()
{
	int iNo = 0;
	
	printDigits();
	
	return 0;
}

//this function contains actual logic
void printDigits()
{
	int i = 0;
	for(i = 1; i <= 7; i++)
	{
		printf("%d\n", i );
	}
}