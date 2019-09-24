#include <stdio.h>

int max(int x, int y);

int main() {
	int bigger = max(234, -2);
	printf("%d\n", bigger);
	
	return 0;
}

int max(int x, int y) {
	return x < y ? y : x;
}