//Accept 'N' no from user and find out largest subarray which is sorted increasing

#include<stdio.h>
#include<malloc.h>


//function declaration
void findLargest(int *,int);


//entry point function
int main()
{
	int iCnt=0,iLength=0;
	int *ptr=NULL;
		
	printf("Enter no of elements........\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter nos....\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	findLargest(ptr,iLength);
	
	return 0;
	
}


//this function find largest subarray
void findLargest(int ptr[],int iSize)
{
	int i,iStart,iEnd,iMax,iMin;
	iStart=iMin=iEnd=iMax=0;
	
	for(i=0; i<iSize-1; i++)
	{
		if(ptr[i] <= ptr[i+1])
		{
			iEnd=i+1;
		}
		else
		{
			if((iMax-iMin)<(iEnd-iStart))
			{
				iMin=iStart;
				iMax=iEnd;
			}
			iStart=iEnd=i+1;
		}
	}
	if((iMax-iMin)<(iEnd-iStart))
	{
		iMin=iStart;
		iMax=iEnd;
	}
	printf("Largest subarray start from %d and end at %d",iMin,iMax);
	
}