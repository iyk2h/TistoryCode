#include <stdio.h>

int main()
{
	int	num1 = 5;
	int	i = 0;

	while(i<3)
	{
	int num2 = 10;
	static int	num3 = 10;
	
	num2 = num1 + num2;
	num3 = num1 + num3;
	printf("\x1b[36m지역변수 num2 :%d\n정적변수num3 :%d \n\n\n",num2,num3);
	i++;
	}
}
