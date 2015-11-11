#include "conndef.h"
#include "connHandler.c"

#define HAVE_INIT
#define INCL_PROTO_DEF
#define INCL_PROTO_DEV

int connectWithTypeOne() {
	handler(1);
}

int connectWithTypeTwo() {
	handler(2);
}

int connectWithTypeThree() {
	handler(3);
}