//Accept no as x & y, and generate the result as x*y(x raise to y) 

#include<stdio.h>

//function declaration
long int power(int,int);

//entry point function
int main()
{
	int iNo1 = 0, iNo2 = 0;
	long int lRet = 0;
	printf("Enter two nos..\n");
	scanf("%d%d",&iNo1,&iNo2);
	
	lRet = power(iNo1,iNo2);
	printf("Result is: %ld", lRet);
	
	return 0;
}

//this function contains actual logic
long int power(int iNo1, int iNo2)
{
	long int lMult = 1;
	int iCnt = 0;
	for(iCnt=1; iCnt<=iNo2 ; iCnt++)
	{
		lMult = lMult * iNo1;
	}
	return lMult;
}


