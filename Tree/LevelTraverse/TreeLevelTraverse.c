#include<stdio.h>
#include<stdlib.h>

#define Q_size 128

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;

node* root;

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

node* fMin(node* root)
{
    node* min = root;
    while(min->left!=NULL)
        min = min->left;
    return min;
}

node* delete(node* root,int data)
{
    node *tmproot = NULL;

    if(root==NULL)
        return NULL;
    if(data < root->data)
        root->left = delete(root->left,data);
    else if(data > root->data)
        root->right = delete(root->right,data);
    else
    {
        if(root -> left!=NULL && root->right != NULL)
        {
            tmproot = fMin(root->right);
            root->data = tmproot->data;
            root->right = delete(root->right,tmproot->data);
        }
        else
        {
            tmproot = (root->left == NULL) ? root->right : root->left;
            free(root);
            return tmproot;
        }
    }
    return root;
}

node** queue;;

node** createQ(int *front, int *rear)
{
	node** queue = (node**)malloc(sizeof(node*)*Q_size);
	*front = *rear = 0;
	return queue;
}

void insertQ(node** queue, int *front, int *rear, node* new_n)
{
	queue[*rear] = new_n;
	(*rear)++;
}
node* deQ(node** queue, int *front)
{
	(*front)++;
	return queue[*front -1];
}

void printLevelOrder(node* root)
{
	int front, rear;
	node** queue = createQ(&front, &rear);
	node* temp_node = root;

	while (temp_node)
	{
		printf("%d ", temp_node->data);
		
		if (temp_node->left)
			insertQ(queue, &front, &rear, temp_node->left);
		if (temp_node->right)
			insertQ(queue, &front, &rear, temp_node->right);
		temp_node = deQ(queue, &front);
	}
}

int main()
{
	root = insert(root, 1);
	root = insert(root, 2);
	root = insert(root, 3);
	root = insert(root, 4);
	root = insert(root, 5);
	root = insert(root, 6);
	root = insert(root, 7);
	root = insert(root, 8);
	//delete(root,4);
	printLevelOrder(root);
}
