//Accept no from user and return largest digit from that no.

#include<stdio.h>

int maxDigit(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	iRet=maxDigit(iNo);
	
	printf("Maximum digits is: %d ",iRet);
	
	
	return 0;
}

int maxDigit(int iValue)
{
	int Digit=0,iMax=0;
	
	while(iValue!=0 && iMax !=9)
	{
		Digit=iValue%10;
		if(iMax < Digit)
		{
			iMax=Digit;
		}			
		
		iValue=iValue/10;
	}
	
	return iMax;
}