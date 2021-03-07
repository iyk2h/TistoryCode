# include <stdio.h>

void BubbleSort(int *arr, int n, int i, int j);
void printarr(int *arr, int n, int i, int j);
void swap(int *a,int *b);

int main(){
  int arr[] = {7,2,4,8,6};
  BubbleSort(arr,5,0,0);

  return 0;
}

void BubbleSort(int *arr,int n, int i, int j){
	printarr(arr, n, n, -2);
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			printarr(arr, n, i, j);
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
    printarr(arr, n, -1, j);
}

void printarr(int *arr, int n, int i, int j) {
    int text=0;
    for(int c = 0; c<n; c++) {
        if ( c > i) {
            printf("\x1b[35m");
        }
        else if ( c == j || c == j+1) {
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
