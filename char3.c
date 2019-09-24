#include <stdio.h>

int main() {
	char ch;
	
	while (EOF != (ch = getchar())) {
		putchar(ch);
	}
	
	return 0;
}