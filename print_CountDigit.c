//Accept no from user and return no.of digits from that no.

#include<stdio.h>

int countDigit(int);

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter one number......\n");
	scanf("%d",&iNo);
	
	iRet=countDigit(iNo);
	
	printf("No.Of digits is: %d ",iRet);
	
	
	return 0;
}

int countDigit(int iValue)
{
	int Digit=0,iCnt=0;
	
	while(iValue!=0)
	{
		Digit=iValue%10;
		iCnt++;
		iValue=iValue/10;
	}
	
	return iCnt;
}