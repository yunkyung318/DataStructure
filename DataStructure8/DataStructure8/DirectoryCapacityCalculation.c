#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct TreeNode *left, *right;
}TreeNode;

int cal_dir_size(TreeNode *root)
{
	int left_size, right_size;
	if (root == NULL) return 0;

	left_size = cal_dir_size(root->left);
	right_size = cal_dir_size(root->right);
	return (root->data + left_size + right_size);
}

int main()
{
	TreeNode n4 = { 500,NULL,NULL };
	TreeNode n5 = { 200,NULL,NULL };
	TreeNode n3 = { 100,&n4,&n5 };
	TreeNode n2 = { 50,NULL,NULL };
	TreeNode n1 = { 0,&n2,&n3 };

	printf("디렉토리의 크기 = %d\n", cal_dir_size(&n1));
}