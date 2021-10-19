//Accept no from user and check whether that no is palindrom or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int checkPalindrom(int);

int main()
{
	int iNo=0;
	BOOL bRet=FALSE;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	bRet=checkPalindrom(iNo);
	
	if(bRet==TRUE)
	{
		printf("No is Palindrom....");
	}
	else
	{
		printf("No is not palindrom.....");
	}
	
	
	return 0;
}

BOOL checkPalindrom(int iValue)
{
	int Digit=0,iRev=0,iTemp=iValue;
	
	while(iValue!=0)
	{
		Digit=iValue%10;
		iRev=(iRev*10) + Digit;
		iValue=iValue/10;
	}
	
	if(iRev == iTemp)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}