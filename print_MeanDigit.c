//Accept no from user and return smallest digit from that no

#include<stdio.h>

int meanDigit(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	iRet=meanDigit(iNo);
	
	printf("Smallest digits is: %d ",iRet);
	
	
	return 0;
}

int meanDigit(int iValue)
{
	int Digit=0,iMin=9;
	
	while(iValue!=0 && iMin !=0)
	{
		Digit=iValue%10;
		if(Digit < iMin)
		{
			iMin=Digit;
		}
		iValue=iValue/10;
	}
	
	return iMin;
}