#include <stdio.h>

int	main() {
	int *p = NULL;
	int	n = 10;

	p = &n;
	printf("*p의 값:%d, n의 값:%d, *p의 주소값:%p\n", *p, n, p);
	*p += 10;
	printf("*p += 10\n");
	printf("*p의 값:%d, n의 값:%d, *p의 주소값:%p\n", *p, n, p);
	(*p)++;
	printf("(*p)++\n");
	printf("*p의 값:%d, n의 값:%d, *p의 주소값:%p\n", *p, n, p);
	*p++;
	printf("*p++\n");
	printf("*p의 값:%d, n의 값:%d, *p의 주소값:%p\n", *p, n, p);
}
