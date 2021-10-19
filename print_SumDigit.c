//Accept no from user and return summetion of digits of that no.

#include<stdio.h>

int sumDigit(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	iRet=sumDigit(iNo);
	
	printf("Summetion of digits is: %d ",iRet);
	
	
	return 0;
}

int sumDigit(int iValue)
{
	int Digit=0,iSum=0;
	
	while(iValue!=0)
	{
		Digit=iValue%10;
		iSum=iSum+Digit;
		iValue=iValue/10;
	}
	
	return iSum;
}