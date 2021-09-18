// Accpet range from user and print all prime no's

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


//function declaration
void printPrime(int,int);
BOOL checkPrime(int);


//entry point function
int main()
{
	int iStart =0, iEnd = 0;
	
	printf("Enter range  \n");
	scanf("%d%d",&iStart,&iEnd);
	
	printPrime(iStart,iEnd);
	
	
	return 0;
}

//this fucntion print all prime nos'
void printPrime(int iFrom, int iTo)
{
	int iCnt = 0;
	BOOL bRet = FALSE;
	
	printf("Prime nos: \n");
	
	for(iCnt = iFrom; iCnt<=iTo; iCnt++)
	{
		bRet = checkPrime(iCnt);
		if(bRet == TRUE)
		{
			printf("%d\n",iCnt);
		}
	}
}


//this function check every no is prime or not
BOOL checkPrime(int iNo)
{
	int iCnt = 0;
	
	BOOL bRet =FALSE;
	
	for(iCnt=2; iCnt<= iNo/2; iCnt++)
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