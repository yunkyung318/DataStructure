#include <stdio.h>
#include <stdlib.h>
#define max_list_size 100

typedef int element;
typedef struct {
	element array[max_list_size];
	int size;
}arraylisttype;

void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(arraylisttype *l)
{
	l->size = 0;
}

int is_empty(arraylisttype *l)
{
	return l->size == 0;
}

int is_full(arraylisttype *l)
{
	return l->size == max_list_size;
}

element get_entry(arraylisttype *l, int pos)
{
	if (pos < 0 || pos >= l->size)
		error("위치 오류");
	return l->array[pos];
}

void print_list(arraylisttype *l)
{
	int i;
	for (i = 0; i < l->size; i++)
		printf("%d -> ", l->array[i]);
	printf("\n");
}

void insert_last(arraylisttype *l, element item)
{
	if (l->size >= max_list_size) {
		error("스택 오버 플로우");
	}
	l->array[l->size++] = item;
}

void insert(arraylisttype *l, int pos, element item)
{
	if (!is_full(l) && (pos >= 0) && (pos <= l->size)) {
		for (int i = (l->size - 1); i >= pos; i--)
			l->array[i + 1] = l->array[i];
		l->array[pos] = item;
		l->size++;
	}
}

element delete(arraylisttype *l, int pos)
{
	element item;

	if (pos < 0 || pos >= l->size)
		error("위치 오류");
	item = l->array[pos];
	for (int i = pos; i < (l->size - 1); i++)
		l->array[i] = l->array[i + 1];
	l->size--;
	return item;
}

int main()
{
	arraylisttype list;

	init(&list);
	insert(&list, 0, 10);
	print_list(&list);
	insert(&list, 0, 20);
	print_list(&list);
	insert(&list, 0, 30);
	print_list(&list);
	insert_last(&list, 40);
	print_list(&list);
	delete(&list, 0);
	print_list(&list);
	return 0;
}