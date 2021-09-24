//Accept 'N' elements from user and accept one number from user & search whether that number is present in array or not

#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
BOOL searchNO(int *,int,int);


//entry point function
int main()
{
	int iCnt=0, iValue=0,iLength=0;
	BOOL bRet=FALSE;
	int *ptr=NULL;
	
	printf("Enter no of elements.....\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter elements...\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf("Enter no: %d\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter no you want to search in the array...\n");
	scanf("%d",&iValue);
	
	bRet=searchNO(ptr,iLength,iValue);
	
	if(bRet==TRUE)
	{
		printf("No is present......\n");
	}
	else
	{
		printf("No is not found in the array....");
	}
	return 0;
}

//this function contains actual logic

BOOL searchNO(int *arr, int iSize, int iNo)
{
	int iCnt=0;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(iNo == arr[iCnt])
		{
			break;
		}
	}
	if(iCnt==iSize)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
