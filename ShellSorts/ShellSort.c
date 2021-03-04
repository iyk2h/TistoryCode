#include<stdio.h>
void ShellSort(int *arr, int n);

int main() {
	int arr[] = {9,6,5,8,10,1,3,7,4,2};
	ShellSort(arr,10);	
	return 0;
}

void ShellSort(int *arr, int n) {
	int gap,c=0;
	int key,j,i=0;
	gap = n/2;

	while(1) {
		if(gap%2==0)
			gap++;
		for(i=gap; i<n; i++) {
			key=arr[i];	
			for(j=i-gap;j>=0;j=j-gap) {
				if(key < arr[j])
					arr[j+gap] = arr[j];
				else
					break;
			}
		arr[j+gap] = key;
		}
		if(gap == 1)
			break;
		gap=gap/2;
	}
	for(c=0;c<n;c++){
		printf("%d ",arr[c]);
	}
}
