//Accept no from user and print its number line 
// input 3
// output -3 -2 -1 0 1 2 3
#include<stdio.h>

//function declaration
void numberLine(int);

//entry point function
int main()
{
	int iNo = 0;
	printf("Enter number \n");
	scanf("%d",&iNo);
	
	numberLine(iNo);
	
	return 0;
}

//this function contains logic

void numberLine(int iNo)
{
	int iCnt = 0;
	printf("====================\n");
	for(iCnt = (-iNo); iCnt <= iNo ; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}