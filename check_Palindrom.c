//Accept 'N' no from user and check whether that array is palindrom or not

#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//function declaration
BOOL checkPalindrom(int *,int);


//entry point function
int main()
{
	int iCnt=0,iLength=0;
	int *ptr=NULL;
	BOOL bRet=FALSE;
	
	printf("Enter no of elements........\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter nos....\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=checkPalindrom(ptr,iLength);
	if(bRet==TRUE)
	{
		printf("Array is Palindrom...\n");
	}
	else
	{
		printf("Array is not Palindrom....\n");
	}
	return 0;
}


//this function check array is palindrom or not
BOOL checkPalindrom(int ptr[],int iSize)
{
	int i=0,j=iSize-1;
	
	while(i<j)
	{
		if(ptr[i]!=ptr[j])
		{
			break;
		}
		i++;
		j--;
	}
	if(i>=j)
	{
		return TRUE; 		
	}
	else
	{
		return FALSE;
	}
}