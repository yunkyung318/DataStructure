#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct {
	int data;
	struct TreeNode *left, *right;
}TreeNode;

int main()
{
	TreeNode *n1, *n2, *n3;
	n1 = (TreeNode *)malloc(sizeof(TreeNode));
	n2 = (TreeNode *)malloc(sizeof(TreeNode));
	n3 = (TreeNode *)malloc(sizeof(TreeNode));

	n1->data = 10;
	n1->left = n2;
	n1->right = n3;

	n2->data = 20;
	n2->left = NULL;
	n2->right = NULL;

	n3->data = 30;
	n3->left = NULL;
	n3->right = NULL;

	return 0;
}