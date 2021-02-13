#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 100

typedef int element;

typedef struct {
	element data[MAX_STACK];
	int top;
}StackType;

void init_stack(StackType *s)
{
	s->top = -1;
}

int is_empty(StackType *s)
{
	return (s->top == -1);
}

int is_full(StackType *s)
{
	return (s->top == (MAX_STACK - 1));
}

void push(StackType *s,element item) {
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else s->data[++(s->top)] = item;
}

element pop(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

element peek(StackType *s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���鿡��\n");
		exit(1);
	}
	else return s->data[s->top];
}

int main()
{
	StackType s;

	init_stack(&s);
	
	push(&s, 10);
	push(&s, 20);
	push(&s, 30);

	printf("peek() -> %d\n", peek(&s));

	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));

	return 0;
}