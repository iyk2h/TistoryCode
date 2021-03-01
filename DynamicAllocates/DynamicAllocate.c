#include <stdio.h>
#include <stdlib.h> //malloc 함수를 쓰기 위함

int main(void) {
	int arr_len = 5;
	int* ptr_arr;
	
	ptr_arr = (int*) malloc(arr_len * sizeof(int));	// 동적 할당 
	
	if (ptr_arr == NULL) {	// 메모리 동적 할당이 실패
	
		printf("메모리 동적 할당 실패\n");
		exit(1);
	}
	
	printf("동적 할당받은 메모리 다음과 같다\n");
	for (int i = 0; i < arr_len; i++) {
		printf("%d ", ptr_arr[i]);
	}
	
	free(ptr_arr);			// 동적 할당 해제
	
	return 0;
}
