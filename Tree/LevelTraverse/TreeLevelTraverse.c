#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
    struct node* Queue;
}node;

node* Node;

node* insert(node* Nnode, int value)
{
	if(Nnode == NULL)
	{
		Nnode = (node*)malloc(sizeof(node));
		Nnode->data=value;
		Nnode->left = Nnode->right = NULL;
		return Nnode;
	}
	else
	{
		if(value < Nnode->data)
			Nnode->left = insert(Nnode->left, value);
		else
			Nnode->right = insert(Nnode->right, value);
	}
	return Nnode;
}

node* delete(node* Dnode, int value)
{
	if(Dnode == NULL)
		return Dnode;
}

int main()
{
	Node = insert(Node, 5);
	printf("%d",Node->data);
	Node = insert(Node, 4);
	printf("%d",Node->left->data);
}
