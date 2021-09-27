// Accept 'N' no from user and find second maximum no 

#include<stdio.h>
#include<malloc.h>


//function declaration

int searchSecMax(int *,int);

//entry point function
int main()
{
	int iCnt=0, iResult=0, iLength=0;
	int *ptr=NULL;
	
	printf("Enter no of elements...\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter elements...\n");
	
	for(iCnt=0; iCnt <iLength; iCnt++)
	{
		printf("Enter %d no: \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iResult=searchSecMax(ptr,iLength);
	
	printf("Second maximum no is: %d\n",iResult);
	
	return 0;
}

//this function traverse whole array and find second maximum number
int searchSecMax(int arr[],int iSize)
{
	int iCnt=0,fMax=0,sMax=0;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(fMax < arr[iCnt])
		{
			sMax=fMax;
			fMax=arr[iCnt];
		}
		else if(fMax !=arr[iCnt] && sMax < arr[iCnt])
		{
			sMax=arr[iCnt];
		}
	}
	
	return sMax;
}