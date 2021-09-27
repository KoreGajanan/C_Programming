//Accept 'N' no's from user and printf such no from array whoes magnitude is equal to multiplication
// of its immidiate neighour

#include<stdio.h>
#include<malloc.h>

//function declaration
void patternMultiply(int [],int);

//entry point function
int main()
{
	int iCnt=0, iLength=0;
	int *ptr=NULL;
	
	printf("Enter no of elements...\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter elements......\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf("Enter %d no: \n",iCnt+1);
		scanf("%d",ptr+iCnt);
	}
	
	patternMultiply(ptr,iLength);
	
	return 0;
}

void patternMultiply(int arr[],int iSize)
{
	int iCnt=0;
	printf("Magnitute of immidiate neighour is: \n");
	for(iCnt=1; iCnt<iSize-1; iCnt++)
	{
		if(arr[iCnt-1] * arr[iCnt+1] == arr[iCnt])
		{
			printf("%d * %d == %d \n", arr[iCnt-1], arr[iCnt+1], arr[iCnt]);
		}
	}
}