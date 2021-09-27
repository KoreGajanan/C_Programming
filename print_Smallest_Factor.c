//Accept two no's from user and print smallest factor

#include<stdio.h>

//function declaration
int smallestCommonFactor(int,int);

//entry point function
int main()
{
	int iCnt=0, iResult=0,iValue1=0,iValue2=0;
	
	
	printf("Enter First no: ..\n");
	scanf("%d",&iValue1);
	
	
	
	printf("Enter Second no: ..\n");
	scanf("%d",&iValue2);
	
	
	iResult=smallestCommonFactor(iValue1,iValue2);
	
	printf("Smallest common factor is: %d\n",iResult);
	
	return 0;
}

//this function contains actual logical
int smallestCommonFactor(int iNo1,int iNo2)
{
	int iCnt=2;
	
	while(iCnt <= iNo1/2 && iCnt <=iNo2/2)
	{
		if(iNo1 % iCnt == 0 && iNo2 % iCnt == 0)
		{
			break;
		}
		iCnt++;
	}
	if(iCnt == iNo1/2+1 || iCnt == iNo2/2+1)
	{
		return 0;
	}
	else
	{
		return iCnt;
	}
	
}