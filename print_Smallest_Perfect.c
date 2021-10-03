//Accept 'N' no's from user and return smallest perfect no


#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
int printPerfect(int *,int);
BOOL checkPerfect(int);


//entry point function
int main()
{
	int iCnt=0,iResult=0,iLength=0;
	int *ptr=NULL;
	
	printf("Enter no of elements...\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(iLength*sizeof(int));
	
	printf("Enter elements....\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf("Enter no: %d\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iResult=printPerfect(ptr,iLength);
	
	printf("Smallest perfect no is: %d\n",iResult);
	
	return 0;
}

//this function return smallest perfect number
int printPerfect(int arr[],int iSize)
{
	int iCnt=0,iMin=0;
	BOOL bRet=FALSE;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		
		bRet=checkPerfect(arr[iCnt]);
		
		if(bRet==TRUE)
		{
			if(iMin==0)
			{
				iMin=arr[iCnt];
				
			}
			else
			{
				if(iMin>arr[iCnt])
				{
					iMin=arr[iCnt];
				}
			}
		}
		
	}
	return iMin;
}


//this function check whether no is perfect or not
BOOL checkPerfect(int iNo)
{
	int iCnt=0,iSum=0;
		
	for(iCnt=1; iCnt<=iNo/2; iCnt++)
	{
				
		if(iNo % iCnt == 0)
		{
			iSum=iSum+iCnt;
			
		}
		
	}
	if(iSum==iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

