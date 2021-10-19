//Accept no from user and check whether no is strong no or not.

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkStrong(int);
int Fact(int);

int main()
{
	int iNo=0;
	BOOL bRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	bRet=checkStrong(iNo);
	
	if(bRet==TRUE)
	{
		printf("No is Strong....");
	}
	else
	{
		printf("No is not Strong.....");
	}	
	
	return 0;
}

BOOL checkStrong(int iValue)
{
	int Digit=0,iTemp=iValue,iSum=0;
	
	while(iValue!=0)
	{
		Digit=iValue%10;
		iSum=iSum+Fact(Digit);
		iValue=iValue/10;
	}
	
	if(iSum==iTemp)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int Fact(int iNo)
{
	int iFact=1;
	
	while(iNo != 0)
	{
		iFact=iFact*iNo;
		iNo--;
	}
	return iFact;
}