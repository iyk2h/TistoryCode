#include<stdio.h>

void Combine(int *arr,int left, int mid, int right );
void Divide(int *arr, int left, int right);

# define n 10
int m[n];

int main()
{
    int arr[n] = {9,6,5,8,10,1,3,7,4,2};
	Divide(arr,0,n-1);

	for(int c=0;c<n;c++)
        printf("%d ",arr[c]);
}

void Combine(int *arr,int left,int mid, int right )
{
	if(left >= right) return;
	int LS, RS, toM, l;
	LS = left;
	RS = mid +1;
	toM = left;
	while(toM <= right) {
		if(RS > right)
			m[toM++] = arr[LS++];
		else if(LS > mid)
			m[toM++] = arr[RS++];
		else if(arr[LS] <= arr[RS])
			m[toM++] = arr[LS++];
		else if(arr[LS] >= arr[RS])
			m[toM++] = arr[RS++];
	}
	for(l=left;l<=right;l++)
		arr[l] = m[l];
}

void Divide(int *arr, int left, int right)
{
	int mid;
	
	if(left < right) {
	mid = (left+right)/2;
	Divide(arr, left, mid);
	Divide(arr, mid+1, right);

	Combine(arr, left, mid, right);
	}
}
