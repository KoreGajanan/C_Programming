//Concat 1st string at the end of 2nd string. 3rd parameter of the function should be no.of character & we have 
//to concat only that no of characters


#include<stdio.h>

void strNCatX(char *,char *,int);

int main()
{
	char arr[25];
	char brr[25];
	
	int iNo=0;
	
	printf("Enter 1st String...\n");
	scanf("%[^'\n']s",arr);
	
	fflush(stdin);
	
	printf("Enter 2nd String...\n");
	scanf("%[^'\n']s",brr);
	
	fflush(stdin);
	
	printf("Ente no of character you want to copy....\n");
	scanf("%d",&iNo);
	
	strNCatX(arr,brr,iNo);
	
	printf("Copied no of character is: %s",arr);
	
	return 0;
}

void strNCatX(char *src, char *dest,int iCnt)
{
	if((src == NULL )||(dest == NULL)||(iCnt <= 0))
	{
		return;
	}
	while(*src != '\0')
	{
		src++;
	}
	
	while((*dest != '\0') && (iCnt != 0))
	{
		*src =*dest;
		src++;
		dest++;
		iCnt--;
	}
	*src='\0';
}