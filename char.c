#include <stdio.h>

int main() {
	char ch;
	ch = getc(stdin);
	
	while (!feof(stdin)) {
		putc(ch, stdout);
		ch = getc(stdin);
	}
	
	return 0;
}