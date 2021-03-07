#include <stdio.h>

int	main() {
	int a = 1, b = 2, c = 3;
	int *parr[3] = {&a, &b, &c};

printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
}
