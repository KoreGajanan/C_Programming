//Accept 'N' no's from user and accept one no from user.check whether that no is present in array or not
//If that no is not present in a array then we have to return nearest no

#include<stdio.h>
#include<malloc.h>

//function declaration
int searchNearestNo(int [],int,int);

//entry point function
int main()
{
	int iCnt=0, iLength=0,iResult=0,iValue=0;
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
	
	printf("Enter no you want to search...\n");
	scanf("%d",&iValue);
	
	iResult=searchNearestNo(ptr,iLength,iValue);
	
	printf("Nearest no is: %d\n",iResult);
	
	return 0;
}

//This function search no that you enter if that no is found then return that no o.w.it return nearest no
int searchNearestNo(int arr[],int iSize,int iNo)
{
	int iCnt=0,Diff=0,Nearest=0,MinDiff=0;
	MinDiff=arr[0]-iNo;
	
	if(MinDiff < 0)
	{
		MinDiff=-MinDiff;
	}
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		Diff=arr[iCnt]-iNo;
		
		if(Diff <0 )
		{
			Diff=-Diff;
		}
		if(Diff==0)
		{
			Nearest=arr[iCnt];			
			break;
		}
		else
		{
			if(Diff <= MinDiff)
			{
				MinDiff=Diff;
				Nearest=arr[iCnt];
			}
		}
		
	}
	return Nearest;
}

