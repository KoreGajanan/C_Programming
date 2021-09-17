//Accept range from user and print all the no from that range

#include<stdio.h>

void printRange(int, int);


int main()
{
	int iStart = 0 , iEnd = 0;
	
	printf("Enter range...\n");
	scanf("%d %d", &iStart,&iEnd);
	
	printRange(iStart ,iEnd);
	
	
	
	return 0;
	
}


void printRange(int iFrom , int iTo)
{
	int iCnt = 0;
	printf("Range From %d to %d \n",iFrom,iTo);
	for(iCnt = iFrom; iCnt<=iTo; iCnt++)
	{
		printf("%d \n",iCnt);
	}
	
}