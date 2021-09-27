//Accept two no's from user and print largest common factors


#include<stdio.h>

//function declaration
int commonFactor(int,int);

//entry point function
int main()
{
	int iCnt=0, iResult=0,iValue1=0,iValue2=0;
	
	
	printf("Enter First no: ..\n");
	scanf("%d",&iValue1);
	
	
	
	printf("Enter Second no: ..\n");
	scanf("%d",&iValue2);
	
	
	iResult=commonFactor(iValue1,iValue2);
	
	printf("Largest common factor no is: %d\n",iResult);
	
	return 0;
}

//this function contains actual logical
int commonFactor(int iNo1,int iNo2)
{
	int iCnt=1,iFactor=0;
	
	while(iCnt <= iNo1/2 && iCnt <=iNo2/2)
	{
		if(iNo1 % iCnt ==0 && iNo2 % iCnt == 0)
		{
			iFactor=iCnt;
		}
		iCnt++;
	}
	return iFactor;
}