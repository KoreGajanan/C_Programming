//Accept no from user and print all digits of that no in reverse order

#include<stdio.h>

void printDigit(int);


int main()
{
	int iNo=0;
	
	printf("Enter one number...\n");
	scanf("%d",&iNo);
	
	printDigit(iNo);
	
	
	return 0;
}

void printDigit(int iValue)
{
	int Digit=0;
	printf("Reverse order is......\n");
	while(iValue!=0)
	{
		Digit=iValue % 10;
		printf("%d ",Digit);
		iValue=iValue/10;
	}
}