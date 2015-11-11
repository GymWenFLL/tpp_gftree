#include <iostream>
#include "conndef.h"
#include "connInit.c"
#include "../lib/hwbug.c"
#include "../lib/fwbug.c"
#include "../lib/swbug.c"
#include "help.cpp"
#include <cstdio>

int main() {
	int programAll;
	programAll = 1;
	while (programAll="1") {
		int type;
		type = 0;
		type * stdin;
		if (type="help") {
			help();
		}
		else {
			if (type="1") {
				connectWithTypeOne();
				handleAndListenToConnectionTypeOne();
			}
			else {
				if (type="2") {
					connectWithTypeTwo();
					handleAndListenToConnectionTypeTwo();
				}
				else {
					if (type="3") {
						connectWithTypeThree();
						handleAndListenToConnectionTypeThree();
					}
					else {
						std::cout << "Unknown Type or Command." << std::endl;
					}
				}
			}
		}
	}
}
