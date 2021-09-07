// Accept Two numbers from user and return maximum number

#include<stdio.h>

//function decleration

int maximum(int,int);		

//entry point function

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iResult = 0;
	
	printf("Enter First number \n");
	scanf("%d",&iNo1);
	
	printf("Enter Second number \n");
	scanf("%d",&iNo2);
	
	iResult = maximum(iNo1,iNo2);
	
	printf("Maxmun number is: %d",iResult);
	
	
	return 0;
}

//This function contains actual logic

int maximum(int iNo1, int iNo2)
{
	if(iNo1 > iNo2)
	{	
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
