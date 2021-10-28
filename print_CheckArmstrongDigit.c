//Accept no from user and check whether that no armstrong no or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkArmstrong(int);
int countDigit(int);
int Power(int,int);

int main()
{
	int iNo=0;
	BOOL bRet=FALSE;
	
	printf("ENter one number.....\n");
	scanf("%d",&iNo);
	
	bRet=checkArmstrong(iNo);
	
	if(bRet==TRUE)
	{
		printf("Number is armstrong.........");
	}
	else
	{
		printf("Number is not armstrong.........");
	}
	
	
	return 0;
}

BOOL checkArmstrong(int iValue)
{
	int iDigit=0,iCnt=0;
	int iTemp=iValue,iSum=0;
	
	iCnt=countDigit(iValue);
	
	while(iValue != 0)
	{
		iDigit=iValue % 10;
		iSum=iSum+Power(iDigit,iCnt);
		iValue=iValue/10;
		
	}
	
	if(iSum == iTemp)
	{
		return TRUE;
	}
}

int Power(int x,int y)
{
	int iAns=1;
	
	while(y != 0)
	{
		iAns=iAns * x;
		y--;
	}
	
	return iAns;
}

int countDigit(int iNo)
{
	int iCnt=0;
	int iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		iCnt++;
	}
	
	return iCnt;
}