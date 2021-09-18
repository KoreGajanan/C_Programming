//Accpet 10 no's from user and return addition of all even no's

#include<stdio.h>

int main()
{
	int iCnt=0, iSum=0;
	int arr[10]={0};
	
	printf("Enter 10 elements..\n");
	
	//this loop accept 10 elements
	for(iCnt=0; iCnt<10; iCnt++)
	{
		printf("Enter no: %d \n",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}
	
	
	//this loop perform addition of even nos
	for(iCnt=0; iCnt<10; iCnt++)
	{
		if(arr[iCnt] % 2 == 0)
		{
			iSum= iSum + arr[iCnt];
		}
	}
	
	printf("Addition of all even nos is: %d",iSum);
	
	return 0;
}
