#include <stdio.h>

int main()
{
	int	num = 0;
	int	*hi = NULL;
	int	*hello = NULL;

	//포인터 변수 hi에 num의 주소를 저장
	hi = &num;
	//변수 num의 주소를 알기위해 &연산자를 사용한다.


	//포인터 변수 hi에 hello의 주소를 저장
	hi = hello;
	
	//두 차이점은
	//변수 num은 &연산자를 이용해 주소를 나타내고
	//포인터 변수 hello는 hello자체가 주소를 나타낸다
	*hi = 3;
}


