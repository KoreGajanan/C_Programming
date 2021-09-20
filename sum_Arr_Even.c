//Accept 'N' elements from user and return addition of all even number

#include<stdio.h>
#include<malloc.h>

//function declaration
int sumArrEven(int * ,int);


//entry point function.
int main()
{
	int iCnt = 0,iLength=0, iResult=0;
	
	int *arr = NULL;
	
	printf("Enter no of elements....\n");
	scanf("%d",&iLength);
	
	// filter 
	if(iLength <= 0)
	{
		printf("Invalid input...!!!");
		return -1;
	}
	
	arr=(int *)malloc(iLength*sizeof(int));
	
	//filter
	if(arr==NULL)
	{
		printf("Unable to allocate memory..");
		return -1;
	}
	
	
	printf("Enter elements...\n");
	for(iCnt =0 ; iCnt <iLength; iCnt++)
	{
		printf("Enter no: %d\n",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}
	
	iResult = sumArrEven(arr, iLength);
	printf("Addition of even no is: %d",iResult);
	
	return 0;
	
}

// this function contains actual logic
int sumArrEven(int *ptr ,int iSize)
{
	int iCnt = 0, iSum =0;
	
	for(iCnt =0; iCnt <iSize; iCnt++ )
	{
		if((*ptr)%2 == 0)
		{
			iSum = iSum +(*ptr);
		}
		ptr++;
	}
	
	return iSum;
}