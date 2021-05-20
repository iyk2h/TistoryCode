#include <stdio.h>

#define num 8
int node[] = {2,1,33,21,6,42,50,5};

void heapify(int n, int start, int *node)
{
	int l,r,tmp;
	l = start*2+1;
	r = start*2+2;

	if(r>n)
	{
		return;
	}
	if(node[l] > node[start] || node[r] > node[start])
	{
		if(node[l] > node[r])
		{
			tmp = node[start];
			node[start]=node[l];
			node[l]=tmp;
			return heapify(n,l,node);
		}
		else
		{
			tmp = node[start];
			node[start]=node[r];
			node[r]=tmp;
			return heapify(n,r,node);
		}
	}
	return;
}
void maxHeap(int n)
{
	int start = n/2-1;
	for(int i = start ; i >=0 ; i--)
	{
		heapify(n,i,node);
	}
}
void heapSort(int n)
{
	int tmp;
	n--;
	while(n>1)
	{
		maxHeap(n);
		tmp = node[n];
		node[n] = node[0];
		node[0] = tmp;
		n--;
	}
	/*
	for(int i = n-1; i>=0 ; i--)
	{
		maxHeap(i);
		tmp = node[i];
		node[i] = node[0];
		node[0] = tmp;
	}
	*/
}
void print(int *node)
{
	for(int i=0 ; i<num; i++)
	{
		printf("%d ",node[i]);
	}
}

int main()
{
	int n = num;
//	maxHeap(n);
	heapSort(n);
	print(node);
}
