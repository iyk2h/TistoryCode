#include <stdio.h>

void InsertionSort(int *arr, int n, int i, int j);
void printarr(int *arr, int n, int i, int j);
void swap(int *a,int *b);

int main(){
  int arr[] = {7,5,4,8,6};
  InsertionSort(arr,5,0,0);

  return 0;
}

void InsertionSort(int *arr,int n, int i, int j){
	int key;
    printarr(arr, n, -5, 5);
    for(i=1; i<n; i++){
		key = arr[i];
        for(j=i-1; j>=0; j--){
		printarr(arr, n, i, j);
            if(arr[j] > key)
                arr[j+1] = arr[j];
			else
				break;
        }
		arr[j+1] = key;
	}
  printarr(arr, n, n, -2);
}

void printarr(int *arr, int n, int i, int j) {
    for(int c = 0; c<n; c++) {
		if ( c == j)
			printf("\x1b[33m");
		else if ( c < i) {
            printf("\x1b[35m");
        }
        else if ( c == i) {
            printf("\x1b[33m");
        }
        else{
            printf("\x1b[37m");
        }
        printf(" %d ", arr[c]);
    }
    printf("\n");
}

void swap(int *a,int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
