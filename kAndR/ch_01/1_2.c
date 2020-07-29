#include <stdio.h>

/*
	This program has an intentionally bad escape
	character at the end of the printf statement.
	It causes the output to look weird.
*/

int main() {
	printf("Hello, bad escape char!\o");
}
