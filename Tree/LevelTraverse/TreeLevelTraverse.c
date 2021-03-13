#include<stdio.h>

typedef struct *node
{
    int data;
    struct *node left;
    struct *node right;
	struct *node date;

    struct *node Queue;
}node;

node *insert(int value)
{
	
