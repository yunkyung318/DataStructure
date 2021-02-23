#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element[100];
typedef struct {
	element data;
	struct ListNode *link;
}ListNode;

ListNode *insert_first(ListNode *head, element data)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	strcpy(node->data, data);
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
	}
	return head;
}

int main()
{
	ListNode *head = NULL;

	head = insert_first(head, "KIM");
	head = insert_first(head, "PARK");
	head = insert_first(head, "CHOI");

	ListNode *p = head;
	for (int i = 0; i < 10; i++) {
		printf("ÇöÀç Â÷·Ê = %s\n", p->data);
		p = p->link;
	}
	return 0;
}