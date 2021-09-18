//Accpet 10 no's from user and print all prime nos

#include<stdio.h>

int main()
{
	int iCnt=0, iCnt1=0, iNo=0;
	int arr[10]={0};
	
	printf("Enter 10 elements..\n");
	
	//this loop accept 10 elements
	for(iCnt=0; iCnt<10; iCnt++)
	{
		printf("Enter no: %d \n",iCnt+1);
		scanf("%d",&arr[iCnt]);
	}
	
	
	//this loop traverse 10 elements
	printf("Prime nos is: \n");
	for(iCnt=0; iCnt<10; iCnt++)
	{
		iNo=arr[iCnt];
	//this loop print all prime nos
		for(iCnt1 = 2; iCnt1 <=iNo/2; iCnt1++)
		{
			if(iNo % iCnt1 == 0)
			{
				break;
			}
		}
		if(iCnt1 == (iNo/2)+1)
		{
			printf("%d\n",arr[iCnt]);
		}
	}
	
	
	
	return 0;
}
