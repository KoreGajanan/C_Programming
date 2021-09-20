//Accept 'N' elements from user and display odd numbers

#include<stdio.h>
#include<malloc.h>

//function declaration
void displayOdd(int * ,int);


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
	
	displayOdd(arr, iLength);
		
	return 0;
	
}

// this function contains actual logic
void displayOdd(int *ptr ,int iSize)
{
	int iCnt = 0;
	
	printf("Odd numbers is: \n");
	for(iCnt =0; iCnt <iSize; iCnt++ )
	{
		if(ptr[iCnt] % 2 != 0)
		{
			printf("%d \n",ptr[iCnt]);
		}
		
	}
	
	
}