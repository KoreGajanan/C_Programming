// Accept range from user and perform addition of all the element in that range

#include<stdio.h>

//function declaration
int sumRange(int,int);

//entry point function
int main()
{
	int iStart = 0, iEnd = 0, iRes = 0;
	printf("Enter range..\n");
	scanf("%d %d",&iStart,&iEnd);
	
	iRes = sumRange(iStart ,iEnd);
	printf("Addition is: %d",iRes);	
	
	
	
	return 0;
}


//this function actual contains logic

int sumRange(int iFrom, int iTO)
{
	int iSum = 0, iCnt=0;
	
	for(iCnt = iFrom ; iCnt <=iTO ; iCnt++)
	{
		iSum = iCnt + iSum;
	}
	
	return iSum;
}