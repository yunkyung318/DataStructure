#include <stdio.h>

typedef struct TreeNode {
	int key;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode *search(TreeNode *node, int key)
{
	if (node == NULL) return NULL;
	if (key == node->key) return node;
	else if (key < node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
}