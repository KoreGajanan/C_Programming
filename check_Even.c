// Accept One numbers from user and check whether that number is even or odd

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function decleration
BOOL checkEven(int );



//entry point function
int main()
{
	int iNo = 0;
	BOOL bRet = FALSE;
	
	printf("Enter one number..\n");
	scanf("%d",&iNo);
	
	bRet = checkEven(iNo);
	
	if(bRet==TRUE)
	{
		printf("Number is even.");
	}
	else
	{
		printf("Number is odd.");
	}
	
	return 0;
}

//This function contains actual logic
BOOL checkEven(int iNo)
{
	if(iNo % 2 ==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
