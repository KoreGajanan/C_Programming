//Accpe 10 element from user and perform summetion of all the elements of array (seperate function should be return
// for the logic)

#include<stdio.h>

//function declaration
int sumArr(int * ,int);


//entry point function
int main()
{
	int iRes = 0, iCnt=0;
	int arr[10]={0};
	
	printf("Enter 10 elements  \n");
	
	for(iCnt = 0; iCnt <10; iCnt++)
	{
		printf("Enter no: %d \n",iCnt+1);
		scanf("%d",&arr[iCnt]);
		
		
	}
	
	iRes = sumArr(arr,10);
	
	printf("Addition is: %d",iRes);
	
	
	return 0;
}

//this function contains actual logic
//this function return addition of every element in the array and return summetion
int sumArr(int *ptr, int iSize)
{
	int iSum = 0;
	int iCnt=0;
	
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		iSum = iSum + (*ptr);
		ptr++;
	}
	return iSum;
}