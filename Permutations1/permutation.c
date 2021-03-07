#include <stdio.h>

int arr[] = {1,2,3,4}; //전역 변수로선언. 동적 할당이 효율적임

void swap(int *a, int *b ){  //값을 이동하기 위한 함수
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_arr(int size){  //값을 프린트 하기위한 함수
	for(int i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void permutation(int n, int r, int depth){ //재귀함수 함수
	if( r == depth){   //r이 depth(0) 일때 출력함수 호출
		print_arr(depth);
		return;
	}
	for(int i=depth; i<n; i++){
		swap(&arr[i], &arr[depth]); 
		permutation(n, r, depth+1);
		swap(&arr[i], &arr[depth]);
	}
}

int main() {
	permutation(sizeof(arr)/sizeof(int), 1, 0);
	return 0;
}
