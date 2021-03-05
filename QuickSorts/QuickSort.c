#include<stdio.h>

void QuickSort(int *arr, int left, int right);
int Partition(int *arr, int left, int right);
void swap(int *arr, int *a, int *b);

int main() 
{
	int arr[] = {9,6,5,8,10,1,3,7,4,2};

	QuickSort(arr, 0, 9);
	for(int c=0;c<=9;c++){
		printf("%d ",arr[c]);
	}
}

void QuickSort(int *arr, int left, int right)
{
	if(left < right)
	{
	int NewPivot = Partition(arr, left, right);

		
	QuickSort(arr, left, NewPivot-1);
	QuickSort(arr, NewPivot+1, right);
	}
}

int Partition(int *arr, int left, int right)
{
	int low, high, pivot = 0;

	pivot = arr[right];
	low = left;
	high = right-1;

	while(low < high)
	{
	
		while(low<=right && arr[low]<pivot)
		{
			low++;
		}
		while(high>=left && arr[high]>pivot)
		{
			high--;
		}
		if(low<high)
		{
			swap(arr, &arr[low], &arr[high]);
		}
	}
	swap(arr, &arr[low], &arr[right]);
	return low;
}

void swap(int *arr, int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
