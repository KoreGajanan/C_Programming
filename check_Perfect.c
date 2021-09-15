//Accept no from user and check whether that no is perfect or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
BOOL checkPerfect(int);


//entry point function
int main()
{
	int iNo = 0;
	BOOL bRet = FALSE;
	printf("Enter number:  ");
	scanf("%d",&iNo);
	
	bRet = checkPerfect(iNo);
	
	if(bRet == TRUE)
	{
		printf("No is perfect.");
	}
	else
	{
		printf("No is not perfect");
	}
	
	
	return 0;
}


//logic to check no is perfect or not
BOOL checkPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; (iCnt <= iNo/2) && (iSum <= iNo) ; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum = iSum +iCnt;
		}
	}
	
	if(iNo == iSum)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}