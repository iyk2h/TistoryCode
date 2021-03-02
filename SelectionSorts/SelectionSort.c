#include <stdio.h>

void SelectionSort(int *arr, int n, int i, int j);
void printarr(int *arr, int n, int i, int j);
void swap(int *a,int *b);

int main(){
  int arr[] = {7,2,4,8,6};
  SelectionSort(arr,5,0,0);

  return 0;
}

void SelectionSort(int *arr,int n, int i, int j){
    int min;
	printarr(arr, n, -5, 5);
    for(i=0; i<n-1; i++){
		min = i;
        for(j=i+1; j<n; j++){
            if(arr[min] > arr[j])
				min = j;
        printarr(arr, n, i, j);
        }
		if(min != i)
            swap(&arr[i],&arr[min]);
    }
  printarr(arr, n, n, -2);
}

void printarr(int *arr, int n, int i, int j) {
    int text=0;
    for(int c = 0; c<n; c++) {
        if ( c < i) {
            printf("\x1b[35m");
        }
        else if ( c == j || c == i) {
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
