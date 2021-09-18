// Accpet range from user and print all perfect no's

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


//function declaration
void printPerfect(int,int);
BOOL checkPerfect(int);


//entry point function
int main()
{
	int iStart =0, iEnd = 0;
	
	printf("Enter range  \n");
	scanf("%d%d",&iStart,&iEnd);
	
	printPerfect(iStart,iEnd);
	
	
	return 0;
}

//this fucntion print all perfect nos'
void printPerfect(int iFrom, int iTo)
{
	int iCnt = 0;
	BOOL bRet = FALSE;
	
	printf("Perfect nos: \n");
	
	for(iCnt = iFrom; iCnt<=iTo; iCnt++)
	{
		bRet = checkPerfect(iCnt);
		if(bRet == TRUE)
		{
			printf("%d\n",iCnt);
		}
	}
}


//this function check every no is perfect or not
BOOL checkPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	BOOL bRet =FALSE;
	
	for(iCnt=1; iCnt<= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum = iSum +iCnt;
		}
		
	}
	if(iSum == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}