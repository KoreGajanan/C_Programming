//Accept 'N' no's from user and display consqutive pairs of no's whoes addition is equal to next no

#include<stdio.h>
#include<malloc.h>

//function declaration
void searchPatternSum(int *,int);

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
	
	searchPatternSum(ptr,iLength);
	
	return 0;
}

//this function contains actual logic
void searchPatternSum(int arr[],int iSize)
{
	int iCnt=0;
	printf("Consqutive pairs of no's is:  \n");
	for(iCnt=0; iCnt < iSize-2; iCnt++)
	{
		if(arr[iCnt] + arr[iCnt+1] == arr[iCnt+2])
		{
			printf("%d + %d == %d\n",arr[iCnt], arr[iCnt+1], arr[iCnt+2]);
		}
	}
	
}