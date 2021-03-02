void bfs_list(GraphType* g, int v)
{
	GraphNode* w;
	QueueType q;

	init(&q);    			
	visited[v] = TRUE;      
	printf("%d 방문 -> ", v);
	enqueue(&q, v);		
	while (!is_empty(&q)) {
		v = dequeue(&q);		 
		for (w = g->adj_list[v]; w; w = w->link) 
			if (!visited[w->vertex]) {
				visited[w->vertex] = TRUE;  
				printf("%d 방문 -> ", w->vextex);
				enqueue(&q, w->vertex);	
			}
	}
}