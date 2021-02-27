#include <stdio.h>
#include <stdlib.h>

typedef int element;	
typedef struct QueueNode {	
	element data;
	struct QueueNode *link;
} QueueNode;

typedef struct {		
	QueueNode *front, *rear;
} LinkedQueueType;

void init(LinkedQueueType *q)
{
	q->front = q->rear = 0;
}

int is_empty(LinkedQueueType *q)
{
	return (q->front == NULL);
}

int is_full(LinkedQueueType *q)
{
	return 0;
}

void enqueue(LinkedQueueType *q, element data)
{
	QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
	temp->data = data; 		
	temp->link = NULL; 		
	if (is_empty(q)) { 		
		q->front = temp;
		q->rear = temp;
	}
	else { 		
		q->rear->link = temp;  
		q->rear = temp;
	}
}

element dequeue(LinkedQueueType *q)
{
	QueueNode *temp = q->front;
	element data;
	if (is_empty(q)) {		
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else {
		data = temp->data; 		
		q->front = q->front->link; 
		if (q->front == NULL) 	
			q->rear = NULL;
		free(temp); 			
		return data; 			
	}
}
void print_queue(LinkedQueueType *q)
{
	QueueNode *p;
	for (p = q->front; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("NULL\n");
}

int main(void)
{
	LinkedQueueType queue;

	init(&queue);		

	enqueue(&queue, 1);	
	print_queue(&queue);
	enqueue(&queue, 2);	
	print_queue(&queue);
	enqueue(&queue, 3);	
	print_queue(&queue);
	dequeue(&queue);		
	print_queue(&queue);
	dequeue(&queue);		
	print_queue(&queue);
	dequeue(&queue);		
	print_queue(&queue);
	return 0;
}