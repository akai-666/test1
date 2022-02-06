#include <stdio.h>

int main() {
	int i = 0;
	#pragma acc parallel loop
	//for (int i = 0; i < 100; ++i) {
	while (i < 100) {
		printf("Hello World %d\n", i);
		++i;
	}
	return 0;
}
