//Accept range from user and dispaly all prime no's in that range

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
void rangePrime(int ,int);
BOOL checkPrime(int);


//entry point function
int main()
{
	int iStart = 0, iEnd = 0;
	
	printf("Enter range...\n");
	scanf("%d%d",&iStart,&iEnd);
	
	rangePrime(iStart,iEnd);	
	
	return 0;
}



//traverse the every number
void rangePrime(int iFrom, int iTo)
{
	
	int iCnt = 0;
	BOOL bRet = FALSE;
	printf("Prime nos: \n");
	for(iCnt = iFrom ; iCnt <= iTo; iCnt++)
	{
		bRet = checkPrime(iCnt);
		if(bRet == TRUE)
		{
			printf("%d\n",iCnt);
		}
	}
}


//this functon check no is prime or not and return TRUE or FALSE
BOOL checkPrime(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++ )
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