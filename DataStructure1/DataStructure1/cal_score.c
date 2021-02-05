#include <stdio.h>
#define MAX 100

int score[MAX];

int get_max_score(int n) {
	int i, largest;
	largest = score[0];
	for (i = 1; i < n; i++) {
		if (score[i] > largest) {
			largest = score[i];
		}
	}
	return largest;
}