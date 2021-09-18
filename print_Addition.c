//Accpet 10 no's from user and return addition of all no's

#include<stdio.h>

int main()
{
	int iCnt= 0, iSum = 0;
	int arr[10]={0};
	
	printf("Enter 10 elements..\n");
	
	//this loop accept 10 elements
	for(iCnt=0; iCnt <10; iCnt++)
	{
		printf("Enter no: %d \n",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}
	
	
	//this loop perform addition of 10 elements
	for(iCnt = 0; iCnt <10; iCnt++)
	{
		iSum = iSum +arr[iCnt];
	}
	printf("Addition of 10 nos is: %d",iSum);
	
	return 0;
}
