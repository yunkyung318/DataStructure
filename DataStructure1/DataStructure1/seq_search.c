int seq_search(int list[], int key)
{
	int i;
	for (i = 0; i < sizeof(list); i++)
		if (list[i] == key)
			return i;
	return -1;
}