#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	clock_t start, stop;
	double duration;
	start = clock();
	
	for (int i = 0; i < 100000; i++)
		;
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("���� �ð��� %f���Դϴ�.\n", duration);
	return 0;
}