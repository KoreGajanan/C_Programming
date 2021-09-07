//Accept marks from user and calculate the percentage

#include<stdio.h>
//function declaration
float calPerc(int,int);
void displayRes(float);


//entry point function
int main()
{
	int iMarks = 0;
	float fResult = 0.0;
	
	printf("Enter marks  \n");
	scanf("%d",&iMarks);
	
	fResult = calPerc(iMarks,1000);
	
	displayRes(fResult);
	
	return 0;
}

float calPerc(int iObtain , int iTotal)
{
	
	float fAns= 0.0;
	
	fAns = ((float)iObtain/(float)iTotal*100);
	printf("fans is %f",fAns);
	return fAns;
}

void displayRes(float fInput)
{
	if(fInput >= 70.0f)
	{
		printf("Distinction \n");
	}
	else if(fInput >= 60.0f)
	{
		printf("First class \n");
	}
	else if(fInput >= 50.0f)
	{
		printf("Second class  \n");
	}
	else if(fInput >= 40.0f)
	{
		printf("Pass class \n");
	}
	else
	{
		printf("Fail \n");
	}
}
