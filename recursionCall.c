#include <stdio.h>
#include "recursionCall.h"

void recursionCall(int n) {
	printf("Level %d: cell %p\n", n, &n);
	if (n < 5) {
		recursionCall(n + 1);
	}
	printf("LEVEL %d: cell %p\n", n, &n);
}

void recursionTailCall(int n) {
	printf("Level %d: cell %p\n", n, &n);
	if (n < 5) {
		recursionTailCall(n + 1);
	}
	return;
}
