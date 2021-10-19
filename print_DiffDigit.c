//Accept no from user and return diff bet max and min no

#include<stdio.h>

int diffDigit(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	iRet=diffDigit(iNo);
	
	printf("Diff bet max and min digits is: %d ",iRet);
	
	
	return 0;
}

int diffDigit(int iValue)
{
	int Digit=0,iMax=0,iMin=9;
	
	while(iValue!=0)
	{
		Digit=iValue%10;
		if(iMax < Digit)
		{
			iMax=Digit;
		}	
		if(Digit < iMin)
		{
			iMin=Digit;
		}
		iValue=iValue/10;
	}
	
	return iMax-iMin;
}