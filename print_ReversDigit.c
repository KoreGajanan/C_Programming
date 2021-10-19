//Accept no from user and return reverse number

#include<stdio.h>

int reverseDigit(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	iRet=reverseDigit(iNo);
	
	printf("Reverse no.is: %d ",iRet);
	
	
	return 0;
}

int reverseDigit(int iValue)
{
	int Digit=0,iRev=0;
	
	while(iValue!=0)
	{
		Digit=iValue%10;
		iRev=(iRev*10) + Digit;
		iValue=iValue/10;
	}
	
	return iRev;
}