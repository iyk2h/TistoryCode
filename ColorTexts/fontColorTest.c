#include<stdio.h>

int main()
{
	for(int i=0; i<8; i++)
		printf("\x1b[3%dm number 3%d = text color test \x1b[0m  \n",i,i);
	printf("\n");
	for(int i=0; i<8; i++)
		printf("\x1b[4%dm number 4%d = background color test \x1b[0m  \n",i,i);
}
