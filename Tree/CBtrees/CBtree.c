//Complete binary tree
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* right;
	struct node* left;
}node;

node* root = NULL;

node* insert(node* root,int value)
{
	if (root == NULL)
	{
		root = (node*)malloc(sizeof(node));
		root -> data = value;
		root -> right = root -> left = NULL;
	}
if 
	return root;
}

node* delete(node* root)
{
	if(root == NULL)
	{
		printf("don't have moer node");
		return root=NULL;
	}
}

int main()
{
	delete(root);
	root = insert(root, 5);
	printf("%d",root->data);
	delete(root);
	printf("%d",root->data);
}
