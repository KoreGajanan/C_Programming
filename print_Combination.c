//Accept 'N' no from user and as well as accept one no from user and print nos whose addition is equal to that no

#include<stdio.h>
#include<malloc.h>


//function declaration
void printCombination(int *,int,int);


//entry point function
int main()
{
	int iCnt=0,iLength=0,iNo;
	int *ptr=NULL;
		
	printf("Enter no of elements........\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter nos....\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Ente one no\n");
	scanf("%d",&iNo);
	
	printCombination(ptr,iLength,iNo);
	
	return 0;
	
}


void printCombination(int ptr[],int iSize,int iNo)
{
	
	int i=0, j=0;
	for(i=0; i<iSize-1; i++)
	{
		for(j=i+1; j<iSize; j++)
		{
			if(ptr[i] + ptr[j] == iNo)
			{
				printf("%d + %d == %d \n",ptr[i],ptr[j], iNo);
			}
		}
	}
	
}