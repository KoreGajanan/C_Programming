// Accpet range from user and print all such no's which are divisible by 3

#include<stdio.h>

//function declaration
void printDivisible(int,int);

//entry point function
int main()
{
	int iStart =0, iEnd = 0;
	
	printf("Enter range  \n");
	scanf("%d%d",&iStart,&iEnd);
	
	printDivisible(iStart,iEnd);
	
	
	return 0;
}

//this function contains actual logic
void printDivisible(int iFrom, int iTo)
{
	int iCnt = 0;
	
	printf("No's divisible by 3 \n");
	for(iCnt = iFrom ; iCnt <=iTo; iCnt++)
	{
		if(iCnt % 3 == 0)
		{
			printf("%d \n",iCnt);
		}
	}
}