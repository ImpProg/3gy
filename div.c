#include <stdio.h>

short div(int x, int y) {
	return y % x == 0;
}

int main() {
	printf("%d\n", div(2, 4));
	printf("%d\n", div(2, 5));
	
	return 0;
}