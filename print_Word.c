//Accept single digit no and print it into word

#include<stdio.h>

//function declaration
void printWord(int);

//entry point function
int main()
{
	int iNo = 0;
	printf("Enter no \n");
	scanf("%d",&iNo);
	
	printWord(iNo);
	
	return 0;
}

//this function contains actual logic
void printWord(int iNo)
{
	switch(iNo)
	{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		default:
			printf("Invalid Input");
			
	}
}