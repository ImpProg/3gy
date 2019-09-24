#include <stdio.h>
#include <stdlib.h>
#include <math.h>

short is_prime(int number) {
	if (number <= 1) {
		return 0;
	}
	
	int i;
	for (i = 2; i <= sqrt(number); ++i) {
		if (number % i == 0) {
			return 0;
		}
	}
	
	return 1;
}

int main(int argc, char** argv) {
	int number = atoi(argv[1]);
	
	printf("%d is %s prime\n", number, (is_prime(number) ? "" : "not"));
}