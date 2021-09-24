// Accept 'N' no from user and one value from user, return the index at which that value occurs
// in the array (return the index of first occurence of the elements)

#include<stdio.h>
#include<malloc.h>

//function declaration
int searchFirst(int arr[], int ,int);
int searchLast(int arr[], int ,int);
int frequency(int arr[], int , int);


//entry point function

int main()
{
	int iCnt=0, iResult=0,iValue=0,iLenght=0;
	int *ptr=NULL;
	
	printf("Enter no of elements....\n");
	scanf("%d",&iLenght);
	
	ptr=(int *)malloc(iLenght*sizeof(int));
	
	printf("Enter elements...\n");
	
	for(iCnt=0; iCnt<iLenght; iCnt++)
	{
		printf("Enter no: %d\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter one no that you want to search....\n");
	scanf("%d",&iValue);
	
	
	iResult=searchFirst(ptr,iLenght,iValue);
	
	if(iResult==-1)
	{
		printf("There is no such number.........\n");
	}
	else
	{
		printf("First occurence of no at index: %d\n",iResult);
	}
	
	
	iResult=searchLast(ptr,iLenght,iValue);
	
	if(iResult==-1)
	{
		printf("There is no such number.........\n");
	}
	else
	{
		printf("Lats occurence of no at index: %d\n",iResult);
	}
	
	
	iResult=frequency(ptr,iLenght,iValue);
	
	if(iResult==0)
	{
		printf("There is no such number.........\n");
	}
	else
	{
		printf("Frequency of no is: %d\n",iResult);
	}
	return 0;
}
//this function travers the array and find first occurence of no
int searchFirst(int ptr[],int iSize, int iNo)
{
	int iCnt=0;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(iNo==ptr[iCnt])
		{
			break;
		}
	}
	if(iCnt==iSize)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

//this function travers the array and find last occurence of no
int searchLast(int ptr[],int iSize, int iNo)
{
	int iCnt=0;
	
	for(iCnt=iSize-1; iCnt>0; iCnt--)
	{
		if(iNo == ptr[iCnt])
		{
			break;
		}
	}
	if(iCnt== -1)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

//this function travers the aray and find frequency of no
int frequency(int ptr[], int iSize, int iNo)
{
	int iCnt=0,iCounter=0;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(iNo==ptr[iCnt])
		{
			iCounter++;
		}
	}
	
	return iCounter;
}