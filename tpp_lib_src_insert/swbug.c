#include <stdio.h>

void swbug(void * s) {
	void swBugDesc;
	swBugDesc = s;
	printf("[SOFTWARE BUG] %s",swBugDesc);
}
