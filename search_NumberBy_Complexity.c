// Accept 'N' no from user and accpet one no from user and search that no in array 
// with time complexity N/2

//If array contains 'N' elements then in case of linear searching it requires 'N' time complexity
//If we search the elements in bidirectional way then its time complexity reduce to N/2

#include<stdio.h>
#include<malloc.h>

//function declaration
int searchNo(int [],int,int);


//entry point function
int main()
{
	int iCnt=0,iNo=0, iLength=0,iResult=0;
	int *ptr=NULL;
	
	printf("Enter no of elements...\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter elements..\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",ptr+iCnt);
	}
	
	printf("Enter no that want to search....\n");
	scanf("%d",&iNo);
	
	iResult=searchNo(ptr,iLength,iNo);
	printf("No search at index %d ",iResult);
	
	return 0;
}


//this function contains actual logic
int searchNo(int *arr,int iSize,int iNo)
{
	int i=0,j=0;
	for(i=0,j=iSize-1; i<=j; i++,j--)
	{
		if(arr[i]==iNo || arr[j]==iNo)
		{
			break;
		}
	}
	if(i>j)
	{
		return -1;		
	}
	else
	{
		if(arr[i]==iNo)
		{
			return i;
		}
		else
		{
			return j;
		}
	}
}