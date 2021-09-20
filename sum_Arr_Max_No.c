//Accept 'N' elements from user and return maximum no

#include<stdio.h>
#include<malloc.h>

//function declaration
int maximumNo(int * ,int);


//entry point function.
int main()
{
	int iCnt = 0,iLength=0, iResult=0;
	
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
	
	iResult=maximumNo(arr, iLength);
	printf("Maximum no is: %d",iResult);
		
	return 0;
	
}

// this function contains actual logic
int maximumNo(int *ptr ,int iSize)
{
	int iCnt = 0,iMax = 0;
	
	
	for(iCnt =0; iCnt <iSize; iCnt++ )
	{
		if(ptr[iCnt] > iMax)
		{
			iMax = ptr[iCnt];
		}
		
	}
	
	return iMax;
	
}