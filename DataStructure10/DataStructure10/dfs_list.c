int visited[MAX_VERTICES];

void dfs_list(GraphType* g, int v)
{
	GraphNode* w;
	visited[v] = TRUE;   		
	printf("Á¤Á¡ %d -> ", v);		
	for (w = g->adj_list[v]; w; w = w->link)
		if (!visited[w->vertex])
			dfs_list(g, w->vertex);
}