//Accept 'N' elements from user and reverse that array in place

#include<stdio.h>
#include<malloc.h>

//function declaration
void arrayReverse(int [],int);
void printReverseArray(int *,int);

//entry point function
int main()
{
	int iCnt=0,iLength=0;
	
	int *arr=NULL;
	
	printf("Enter no of elements...\n");
	scanf("%d",&iLength);
	
	arr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter numbers...\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	printf("Array is:  \n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf("%d\n",arr[iCnt]);
	}
	arrayReverse(arr,iLength);
	printReverseArray(arr,iLength);
	
	return 0;
}


//this function reverse the array
void arrayReverse(int ptr[],int iSize)
{
	int i=0,j=iSize-1,iTemp=0;
	
	while(i<j)
	{
		iTemp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=iTemp;
		i++;
		j--;
	}
}


//this function diplay only reverse array
void printReverseArray(int arr[],int iLength)
{
	int iCnt=0;
	printf("Reverse array is...\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf("%d ",arr[iCnt]);
	}
}