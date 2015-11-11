#include "../lib/slip/slip.c"

int handle(void * e) {
	if ($e=1) {
		slip_init(ttyS0);
		slip_open(tty);
	}
	if ($e=2) {
		slip_init(ttyS0);
		slip_open(tty);
	}
	if ($e=3) {
		slip_init(ttyS0);
		slip_open(tty);
	}
}