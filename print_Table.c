//Accept no from user and print table of that number (10 multiple of that number)

#include<stdio.h>

//function declaration
void printTable(int);


//entry point function
int main()
{
	int iNo = 0;
	printf("Enter number  \n");
	scanf("%d",&iNo);
	
	printTable(iNo);
	
	return 0;
}

//this function contains actaul logic
void printTable(int iNo)
{
	int iCnt = 0,iMult = 0;
	printf("=========================\n");
	for(iCnt= 1; iCnt <=10 ; iCnt++)
	{
		iMult = iCnt *iNo;
		printf("%d\n",iMult);
	}
}