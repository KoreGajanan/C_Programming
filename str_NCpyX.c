//Accpet string from user and copy first 'N' character from source to destination

#include<stdio.h>

void strNcpyX(char *,char * ,int);

int main()
{
	char arr[25];
	char brr[25];
	int iNo=0;
	
	printf("Enter String  \n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("How many character you want to copy...\n");
	scanf("%d",&iNo);
	
	strNcpyX(arr,brr,iNo);
	
	printf("Copy string is: %s",brr);
	
	return 0;
}

void strNcpyX(char *src,char *dest,int iCnt)
{
	if(src == NULL || dest==NULL || iCnt <= 0)
	{
		return;
	}
	while((iCnt != 0)&&(*src != '\0'))
	{
		*dest=*src;
		src++;
		dest++;
		iCnt--;
	}
	*dest='\0';
}