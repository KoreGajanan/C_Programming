//Accept 'N' number from user and replace every duplicate occurence of the no with zero(0)


#include<stdio.h>
#include<malloc.h>

//function declaration
void duplicateRemove(int [],int);


//entry point function
int main()
{
	int iCnt=0, iLength=0;
	int *ptr=NULL;
	
	printf("ENter no of elements..\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(iLength*sizeof(int));
	
	printf("Enter elements\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		//printf("Enter %d no \n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	duplicateRemove(ptr,iLength);
	
	printf("Output is: \n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf(" %d ",ptr[iCnt]);
	}
	
	return 0;
}

//this function traverse whole array and replace every duplicate no with zero number
void duplicateRemove(int *ptr,int iSize)
{
	int i=0,j=0;
	
	for(i=0; i<iSize-1; i++)
	{
		if(*(ptr+i)==0)
		{
			continue;
		}
		for(j=i+1; j<iSize; j++)
		{
			if(*(ptr+i)==*(ptr+j))
			{
				*(ptr+j)=0;
			}
		}	
	}
}