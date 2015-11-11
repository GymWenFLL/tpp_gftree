#include <stdio.h>

void fwbug(void * h) {
	void fwBugDesc;
	fwBugDesc = h;
	printf("[FIRMWARE BUG] %r",fwBugDesc);
}
