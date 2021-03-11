#include<stdio.h>

#define MAX 5

int front = 0;
int rear = 0;
int queue[MAX];

void init(int data)
{
	int tmp=(rear+1)%MAX;
	if(tmp == front)
	{
		printf(" Full ");
		printf(" \n");
		return;
	}
	else
	{
		rear = (rear+1) % MAX;
		queue[rear]=data;
	}
}

void delete()
{
	if(front == rear)
	{
		printf(" Emty ");
		printf(" \n");
	}
	else
	{
		front = (front+1) % MAX;
		printf(" %d\n",queue[front]);
	}
}

int main()
{
	init(1);
	init(2);
	init(3);
	init(4);
	delete();
}
