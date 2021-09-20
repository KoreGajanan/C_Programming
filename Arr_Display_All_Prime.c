//Accept 'N' elements from user and print all prime no.

#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration

void displayPrime(int * ,int);
BOOL checkPrime(int);

//entry point function.

int main()
{
	int iCnt = 0,iLength=0;
	
	int *arr = NULL;
	
	printf("Enter no of elements....\n");
	scanf("%d",&iLength);
	
		
	arr=(int *)malloc(iLength*sizeof(int));
	
	
	printf("Enter elements...\n");
	for(iCnt =0 ; iCnt <iLength; iCnt++)
	{
		printf("Enter no: %d\n",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}
	
	displayPrime(arr, iLength);
	
		
	return 0;
	
}

// this function travers whole array 
void displayPrime(int *ptr ,int iSize)
{
	int iCnt = 0;
	BOOL bRet =FALSE;
	
	printf("Prime nos is:  \n");
	for(iCnt =0; iCnt <iSize; iCnt++ )
	{
		bRet = checkPrime(ptr[iCnt]);
		if(bRet == TRUE)
		{
			printf("%d\n",ptr[iCnt]);
		}
	}
}

// this function check every no is prime or not
BOOL checkPrime(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt ==0 )
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