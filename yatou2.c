#include "stdio.h"
#include "stdlib.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int i, j;
	int n;
	char c = 'A';
	for (i = 0; i <= n; i++) {
		for (j = 1; j < n; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2n - 1; j++)
			printf("%c", c);
		c += 1;
	}
	return 0;
}
