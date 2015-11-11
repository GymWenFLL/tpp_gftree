#include <stdio.h>

void hwbug(void * k) {
	void hwBugDesc;
	hwBugDesc = k;
	printf("[HARDWARE BUG] %r",hwBugDesc);
}
