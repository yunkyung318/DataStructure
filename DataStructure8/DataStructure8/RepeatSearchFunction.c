#include <stdio.h>

typedef struct TreeNode {
	int key;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode *search(TreeNode *node, int key)
{
	while (node != NULL) {
		if (key == node->key)
			return node;
		else if (key < node->key)
			node = node->key;
		else
			node = node->right;
	}
	return NULL;
}