void mov(int * cf,int * gd) {
	__asm__("mov %b,%a"
		:
		:"cf"(cf),"gd"(gd));
	return 0;
}
