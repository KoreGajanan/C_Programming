//Accept no from user and check whether no is strong no or not.
//In case of any no every digit is from range 0-9
//Instead of calculating the factorial of each digit we can mention the array which contains all calculated factorial as

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkStrong(int);


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
	int arr[10]={1,1,2,6,24,120,720,5040,40320,362880};
	while(iValue!=0 && iSum <= iTemp)
	{
		Digit=iValue%10;
		iSum=iSum+arr[Digit];
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

