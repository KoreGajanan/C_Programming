//Write a program which is use to display ASCII table on screen


#include<stdio.h>

void printAscii();

int main()
{
	
	printAscii();
	return 0;
}

void printAscii()
{
	int i=0;
	
	for(i=0; i<256; i++)
	{
		printf("%c \t %d \n",i,i);
	}
}