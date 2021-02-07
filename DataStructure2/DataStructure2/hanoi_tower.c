#include <stdio.h>

void hanio_tower(int n, char from, char tmp, char to)
{
	if (n == 1) printf("���� 1�� %c���� %c���� �ű��.\n", from, to);
	else {
		hanio_tower(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		hanio_tower(n - 1, tmp, from, to);
	}
}

int main()
{
	hanio_tower(4, 'A', 'B', 'C');
	return 0;
}