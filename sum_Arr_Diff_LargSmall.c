//Accept 'N' elements from user and return difference between largest and smallest no

#include<stdio.h>
#include<malloc.h>

//function declaration
int diffLargSmall(int * ,int);


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
	
	iResult=diffLargSmall(arr, iLength);
	printf("Diff bet largest and smallest no is: %d",iResult);
		
	return 0;
	
}

// this function contains actual logic
int diffLargSmall(int *ptr ,int iSize)
{
	int iCnt = 0,iMin = ptr[iCnt], iMax=0;
	
	
	for(iCnt =0; iCnt <iSize; iCnt++ )
	{
		if(ptr[iCnt] < iMin)
		{
			iMin = ptr[iCnt];
			
		}
		else if(ptr[iCnt] > iMax)
		{
			iMax = ptr[iCnt];
		}
		
	}
	
	printf("Largest no is: %d\n",iMax);
	
	printf("Smallest no is: %d\n",iMin);
	
	return iMax-iMin;
	
}