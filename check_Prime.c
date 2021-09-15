//Accept no from user and check whether that no is prime or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
BOOL checkPrime(int);

//entry point function
int main()
{
	int iNo = 0;
	BOOL bRet = FALSE;
	
	printf("Enter no...\n");
	scanf("%d",&iNo);
	
	bRet = checkPrime(iNo);
	
	if(bRet == TRUE)
	{
		printf("No is prime...");
	}
	else
	{
		printf("No is not prime....");
	}
	
	
	return 0;
}


BOOL checkPrime(int iNo)
{
	int iCnt = 0 ;
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			break;
		}
	}
	if(iCnt == (iNo/2)+1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}