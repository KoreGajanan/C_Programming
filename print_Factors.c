//Accept no from user and prints its factors

#include<stdio.h>

//function declaration
void printFactors(int);

//entry point function
int main()
{
	int iNo = 0;
	printf("Enter number:  ");
	scanf("%d",&iNo);
	
	printFactors(iNo);
	
	return 0;
}

//this function contains actaul logic
void printFactors(int iNo)
{
	int iCnt = 0;
	
	printf("Factors of %d : \n",iNo);
	for(iCnt=1 ; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\n",iCnt);
		}
	}
	
}