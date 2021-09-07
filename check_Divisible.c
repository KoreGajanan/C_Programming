// Accept two numbers from user and check whether that 1st number is completely divisible by 2nd or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function decleration
BOOL checkDivisible(int,int);

//entry point function
int main()
{
	int iNo1 = 0,iNo2 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter one number..\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number...\n");
	scanf("%d",&iNo2);
	
	bRet == checkDivisible(iNo1,iNo2);
	
	if(bRet == TRUE )
	{
		printf("First no is completely divisible by second no..");
	}
	else
	{
		printf("First no is not divisible by second no.....");
	}
	
	
	return 0;
}

//This function contains actual logic
BOOL checkDivisible(int iNo1, int iNo2)
{
	if(iNo1 % iNo2 == 0)
	{
		return TRUE;
		
	}
	else
	{
		return FALSE;
	}
}

