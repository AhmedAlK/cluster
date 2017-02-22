#include <stdio.h>

int main(){
	char buf[5];
	char *x = &buf[0];
	printf("%d, %d\n", sizeof(x), sizeof(*x));
	return 0;
}
