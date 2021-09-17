// Accept range from user and orint nos in reverse order

#include<stdio.h>

//function declaration
void printRangeReverse(int, int);

//entry point function
int main()
{
	int iFrom = 0, iEnd = 0;
	printf("Enter range..\n");
	scanf("%d %d",&iFrom,&iEnd);
	
	printRangeReverse(iFrom, iEnd);
	
	return 0;
}


//this function perform reverse order from end to start
void printRangeReverse(int iStart, int iTo)
{
	int iCnt = 0;
	
	printf("Reverse order is: \n");
	for(iCnt = iTo ; iCnt >= iStart ; iCnt--)
	{
		printf("%d\n",iCnt);
	}
}