#include <stdio.h>

int main() {
	char ch;
	ch = getc(stdin);
	
	while (EOF != ch) {
		putc(ch, stdout);
		ch = getc(stdin);
	}
	
	return 0;
}