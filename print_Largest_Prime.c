//Accept 'N' no's from user and return largest prime no

#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
int largestPrime(int * ,int);
BOOL checkPrime(int);

//entry point function
int main()
{
	int iCnt=0,iLength=0,iResult=0;
	int *arr=NULL;
	
	printf("Enter no of elements...\n");
	scanf("%d",&iLength);
	
	arr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter no's.............\n");
	for(iCnt=0; iCnt < iLength; iCnt++)
	{
		printf("Enter %d no: \n",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}
	
	iResult=largestPrime(arr,iLength);
	
	printf("Largest prime no is: %d",iResult);
	
	
	return 0;
}

//this function display largest prime number
int largestPrime(int arr[],int iSize)
{
	int iCnt=0, iMax=0,iCnt1=0;
	BOOL bRet=FALSE;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		bRet=checkPrime(arr[iCnt]);
		if(bRet==TRUE)
		{
			printf("Prime no is: %d\n",arr[iCnt]);
			if(iMax < arr[iCnt])
			{
				iMax=arr[iCnt];
			}
		}
	}
	return iMax;
}

//this function is check whether no is prime or not
BOOL checkPrime(int iNo)
{
	int iCnt=0;
	for(iCnt=2; iCnt<=iNo/2; iCnt++)
	{
		if(iNo % iCnt ==0 )
		{
			break;
		}
	}
	if(iCnt==iNo/2+1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}