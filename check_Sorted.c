//Accept 'N' no from user and check whether that array is sorted in increasing order or not

#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
BOOL checkSorted(int *,int);


//entry point function
int main()
{
	int iCnt=0,iLength=0;
	int *ptr=NULL;
	BOOL bRet=FALSE;
	
	printf("Enter no of elements........\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter nos....\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=checkSorted(ptr,iLength);
	if(bRet==TRUE)
	{
		printf("Array is Sorted...\n");
	}
	else
	{
		printf("Array is not Sorted....\n");
	}
	return 0;
}


//this function check array is sorted or not
BOOL checkSorted(int ptr[],int iSize)
{
	int iCnt=0;
	
	for(iCnt=0; iCnt<iSize-1; iCnt++)
	{
		if(ptr[iCnt] >= ptr[iCnt+1])
		{
			break;
		}
	}
	if(iCnt==iSize-1)
	{
		return TRUE; 		
	}
	else
	{
		return FALSE;
	}
}