// Accpet range from user and print alternate number

#include<stdio.h>
//function declaration
void printAlternate(int, int);

//entry point function
int main()
{
	int iFrom = 0, iTo = 0;
	printf("Enter range  \n");
	scanf("%d%d",&iFrom,&iTo);
	
	printAlternate(iFrom,iTo);	
	
	return 0;
}

//this function contains actual logic
void printAlternate(int iStart, int iEnd)
{
	int iCnt = 0;
	
	printf("Alternate number is: \n");
	for(iCnt = iStart ; iCnt <= iEnd; iCnt=iCnt+2)
	{
		printf("%d\n",iCnt);
		
	}
}