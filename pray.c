#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[]="PROGRAM";
	int i=0;
	int al=0;
	int left=0;
	int sp=0;
	int space=strlen(str)-1;
	int half=strlen(str)/2;
	for(i=0;i<strlen(str);i++)
	{
		for(sp=0;sp<space;sp++)
		{
			printf(" ");
		}
		space--;
		for(al=0;al<=i;al++)
		{
			printf("%c",str[al+half] );
			if(al+half==strlen(str)-1)
			{
				break;
			}
		}
		if(i>half)
		{
			for(left=0;left<=i-half-1;left++)
			{
				printf("%c",str[left]);
			}
		}
		printf("\n");
	}
	return 0;
}
