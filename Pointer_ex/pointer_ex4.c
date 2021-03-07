#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *parr = arr;

	printf("배열   : %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("포인터 : %d %d %d %d %d\n", parr[0], parr[1], parr[2], parr[3], parr[4]);

	printf("배열 크기   : %d\n", sizeof(arr));
	printf("포인터 크기 : %lu\n", sizeof(parr));
	return 0;
}
